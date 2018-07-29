#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n,m,temp;
			cin>>n>>m;
			n++;					//since 2^n leaf nodes are req for n players which are present in a tree with height n+1
			int a[2500],b[m],i,walk=0;

			int k = (1<<(n-1))-2;
			temp = n;

			for(i=(1<<(n-1))-1;i<=(1<<n)-2;i++)		//Initialization
				{									//Assuming all the leaf nodes are present
					a[i] = 1;
				}		
			for(i=0;i<m;i++)
				{
					cin>>b[i];
					a[b[i]+k] = 0;
				}

			while(1)
			{
				if(n<0) break;
				else
				{
					for(i=(1<<(n-1))-1;i<=(1<<n)-2-1;i=i+2)		
					{									
						if(a[i]^a[i+1])
							{
								a[i/2] = 1;
								walk++;
							}
						
						else if(a[i]&a[i+1])
							a[i/2]=1;	
						else
							a[i/2] = 0;
								
					}
				n--;	
				}
			}

			// cout<<"Tree Array : ";
			// for(i=0;i<(1<<temp)-1;i++)
			// 	cout<<a[i]<<" ";
			// cout<<endl;

			cout<<walk<<endl;

		}
		return 0;
	}