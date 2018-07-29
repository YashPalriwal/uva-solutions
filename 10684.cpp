#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n)
		{
			int i,sum=0,ans=0,a[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum += a[i];
				ans = max(ans,sum);
				if(sum<0)
					sum = 0;
			}
			if(ans>0)
				cout<<"The maximum winning streak is "<<ans<<"."<<endl;
			else
				cout<<"Losing streak."<<endl;
		}
		return 0;
	}