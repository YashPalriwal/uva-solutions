#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,m;
		while(cin>>n>>m && (n||m))
		{
			vector<pair<int,int> > v;
			vector<int> s;

			int i,a,b;
			for(i=0;i<n;i++)
			{
				cin>>a>>b;
				v.push_back(make_pair(a,b));
			}
			int in,j;
			for(i=0;i<m;i++)
			{	
				cin>>a>>b>>in;
				v.push_back(make_pair(a,b));
				while(b<=1000000)
				{
					a += in;
					b += in;
					v.push_back(make_pair(a,b));
				}

			}

			sort(v.begin(),v.end());
			a = v.size();

			// for(i=0;i<a;i++)
			// {
			// 	cout<<v[i].first<<" "<<v[i].second<<endl;
			// }

			for(i=0;i<a;i++)
			{
				s.push_back(v[i].first);
				s.push_back(v[i].second);
			}
			if(is_sorted(s.begin(),s.end()))
				cout<<"NO CONFLICT"<<endl;
			else
				cout<<"CONFLICT"<<endl;


		}
		return 0; 

	}