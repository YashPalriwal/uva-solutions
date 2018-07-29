#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int m,n;
		while(cin>>m>>n && (m||n))
		{
			long long int i,d[m],k[n],c,j,sum=0;
			for(i=0;i<m;i++)
				cin>>d[i];
			for(i=0;i<n;i++)
				cin>>k[i];



			if(n<m)
				cout<<"Loowater is doomed!"<<endl;
			else
			{
				sort(d,d+m);
				sort(k,k+n);
				c = n-m+1;
				i=0,j=0;
				while(1)
				{
					if(i==m || j==n)
						break;
					if(k[j]>=d[i])
					{
						sum += k[j];
						j++;
						i++;
					}
					else
					{
						j++;
						c--;
					}
				}

				if(c>0)
					cout<<sum<<endl;
				else
					cout<<"Loowater is doomed!"<<endl;
			}
		}
		return 0;
	}