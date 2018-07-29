#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int a,b,c,i,j,k,n,flag=0;
			cin>>a>>b>>c;
			n = sqrt(c)+1;

			for(i=-1*n;i<=n;i++)
			{
				if(flag)
					break;
				for(j=i+1;j<=n;j++)
				{
					if(flag)
						break;
					for(k=j+1;k<=n;k++)
					{
						if((i+j+k)==a && (i*j*k)==b && (i*i+j*j+k*k)==c)
						{
							cout<<i<<" "<<j<<" "<<k<<endl;
							flag=1;
							break;
							
						}
					}
				}
			}

			if(!flag)
				cout<<"No solution."<<endl;
		}
		return 0;
	}