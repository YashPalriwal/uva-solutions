#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,d,r;
		while(cin>>n>>d>>r && (n||d || d||r))
		{
			int day[n],night[n],i;
			for(i=0;i<n;i++)
				cin>>day[i];
			for(i=0;i<n;i++)
				cin>>night[i];
			sort(day,day+n);
			sort(night,night+n,greater<int>());
			int res=0,val;
			for(i=0;i<n;i++)
			{
				val = (day[i]+night[i]-d)*r;
				if(val>0)
					res += val;
			}
			cout<<res<<endl;
		}
		return 0;
	}