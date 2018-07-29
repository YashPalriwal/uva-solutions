#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int is_neighbour(long long int a,long long int b)			//Non optimal solution O((1<<n)^2);
															//Optimal solution O((1<<n)*n);
	{
		long long int res = a^b;
		long long int val = (res & (res-1));
		if(val==0) return 1;
		else return 0;
	}

int main()
	{
	// // #ifndef ONLINE_JUDGE 	
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);


	int n;
	while(cin>>n)
		{
			int num = (1<<n);
			int sum[num],i,vertex[num],j;

			for(i=0;i<num;i++)
			{
				cin>>vertex[i];
				sum[i]=0;
			}

			for(i=0;i<num-1;i++)
			{
				for(j=i+1;j<num;j++)
				{
					if(is_neighbour(i,j))
					{
						sum[j] += vertex[i];
						sum[i] += vertex[j];
					}
				}
			}

			// for(i=0;i<num;i++)
			// 	cout<<sum[i]<<" ";
			// cout<<endl;

			long long int SUM=0;

			for(i=0;i<num-1;i++)
			{
				for(j=i+1;j<num;j++)
				{
					if(is_neighbour(i,j))
					{
						if(sum[i]+sum[j]>SUM)
							SUM = sum[i]+sum[j];
					}
				}
			}

			cout<<SUM<<endl;

		}	
		return 0;
	}
	
		
	