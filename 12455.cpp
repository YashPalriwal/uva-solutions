#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n,p;
			cin>>n>>p;
			int a[p],i;
			for(i=0;i<p;i++)
				cin>>a[i];
			int m = 1<<p;

			int j,sum=0,flag=0;
			for(i=0;i<m;i++)
			{
				if(flag)
					break;
				bitset<20> b(i);
				sum=0;
				for(j=0;j<20;j++)
				{
					if(b[j])
						{
							sum += a[j];
							// cout<<"j = "<<j<<endl;
							// cout<<"a[j] = "<<a[j]<<endl;
						}	
				}
				if(sum==n)
				{
					cout<<"YES"<<endl;
					flag=1;
				}
			}

			if(!flag)
				cout<<"NO"<<endl;
		}
		return 0;
	}