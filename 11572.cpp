#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n;						//set -> 1st value/key, count till that
			cin>>n;
			int i,a[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			int max_count = 0,c=0;
			map<int,int> mp;
			i=0;
			while(i<n)
			{
				if(!mp.count(a[i]))
				{

					c++;
					mp.insert(make_pair(a[i],i));
					if(c>max_count)
						{
							max_count = c;
						}
					// cout<<"c = "<<c<<endl;
					// cout<<"max = "<<max_count<<endl;
					i++;		
				}
				else
				{
					i = mp[a[i]] + 1;
					mp.clear();
					c=0;
				}
			}
			cout<<max_count<<endl;
		}
		return 0;
	}