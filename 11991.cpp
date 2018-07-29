#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,q;
		while(scanf("%d%d",&n,&q)==2)
		{
			map<int,int> mp;
			vector<vector<int> > adj;
			int i,a,val=0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&a);
				if(!mp.count(a))
				{
					mp.insert(make_pair(a,val));
					adj.push_back(vector<int>());
					adj[val].push_back(i+1);
					val++;
				}
				else
				{
					adj[mp[a]].push_back(i+1);
				}

			}

			int k,v;
			for(i=0;i<q;i++)
			{
				scanf("%d%d",&k,&v);
				if(adj[mp[v]].size()<k)
					cout<<"0"<<endl;
				else
					cout<<adj[mp[v]][k-1]<<endl;
			}
		}
		return 0;
	}