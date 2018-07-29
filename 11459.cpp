#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int a,b,c;
			cin>>a>>b>>c;
			int i,x,y,flag=1;
			map<int,int> mp;
			vector<int> p;


			for(i=0;i<a;i++)
				p.push_back(1);
			for(i=0;i<b;i++)
			{
				cin>>x>>y;
				mp.insert(make_pair(x,y));
			}
		for(i=0;i<c;i++)
			{
				cin>>x;
				if(flag && a)
				{
					
					p[(i%a)] += x;
					if(mp.count(p[(i%a)]))
						p[(i%a)] = mp[p[(i%a)]];
					if(p[(i%a)]>=100)
						{
							flag=0;
							p[(i%a)] = 100;
						}	

				}
			}

		for(i=0;i<a;i++)
		{
			cout<<"Position of player "<<i+1<<" is "<<p[i]<<"."<<endl;
		}		
		}
		return 0;
	}