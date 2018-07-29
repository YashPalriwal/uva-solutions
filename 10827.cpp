#include<bits/stdc++.h>
using namespace std;
int a[225][225];

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n;
			cin>>n;
			int i,j,k,l;
			// int a[n][n];

			// for(i=0;i<3*n;i++)
			// {
			// 	for(j=0;j<3*n;j++)
			// 	{
			// 		a[i][j] = 0;
			// 	}
			// }
			for(i=n;i<2*n;i++)
			{
				for(j=n;j<2*n;j++)
				{
					cin>>a[i][j];			// will contain overall cumulative sum
					
					if(i>n)
						{
						// b[i][j] += b[i-1][j];
						a[i][j] += a[i-1][j];
						}
					if(j>n)
						{
							a[i][j] += a[i][j-1];
							// c[i][j] += c[i][j-1];
						}	
					if(i>n && j>n)
						a[i][j] -= a[i-1][j-1];

					a[i-n][j] = a[i+n][j] = a[i][j-n] = a[i][j+n] = a[i][j];
				}
			}

			for(i=n;i<2*n;i++)
			{
				for(j=n;j<2*n;j++)
				{
					a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1]; 
				}
			}

			// for(i=0;i<3*n;i++)
			// {
			// 	for(j=0;j<3*n;j++)
			// 	{
			// 		if(a[i][j]>0)
			// 			cout<<a[i][j];
			// 		cout<<" ";
			// 	}
			// 	cout<<endl;
			// }

			int sum,maxS=-99999999;

			for(i=n;i<2*n;i++)
			{
				for(j=n;j<2*n;j++)
				{
					for(k=i;k<i+n;k++)
					{	
						for(l=j;l<j+n;l++)
						{
							sum = a[k][l];
							if(i>n)
								sum -= a[i-1][l];
							if(j>n)
								sum -= a[k][j-1];
							if(i>n && j>n)
								sum += a[i-1][j-1];
							maxS = max(maxS,sum);
							
						}
					}
				}
			}
			cout<<maxS<<endl;
			
		}	
		return 0;
			
	}