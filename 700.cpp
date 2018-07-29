#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,x=1;
		while(cin>>n && n)
		{
			int y[n],a[n],b[n],i,j,k;
			int arr[10010] = {0};
			for(i=0;i<n;i++)
			{
				cin>>y[i]>>a[i]>>b[i];
			}
			for(i=0;i<n;i++)
			{
				k = b[i]-a[i];
				for(j=y[i];j<10000;j=j+k)
				{
					arr[j]++;
				}
			}
			int flag=1;
			for(i=0;i<10000;i++)
			{
				if(arr[i]==n)
				{
					// if(x==1)cout<<"Case #"<<x<<":\nThe actual year is "<<i<<".\n";
					cout<<"Case #"<<x<<":\nThe actual year is "<<i<<".\n\n";
					x++;
					flag=0;
					break;
				}
			}
			if(flag)
			{
				// if(x==1)cout<<"Case #"<<x<<":\nUnknown bugs detected.\n";
				cout<<"Case #"<<x<<":\nUnknown bugs detected.\n\n";
				x++;
			}
		}
		return 0;
	}