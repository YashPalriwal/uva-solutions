#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n;
			cin>>n;
			int a[n],sum=0,i,j;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				// if(i>0) b[i-1]=0;
			}
			for(i=1;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(a[j]<=a[i])
					{
						sum+=1;
					}
				}
			}
			cout<<sum<<endl;
		}
		return 0;
	}