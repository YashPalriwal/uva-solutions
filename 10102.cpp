#include<bits/stdc++.h>
using namespace std;
#define HIGH 999999999

int absolute(int a ,int b)
{
	if(a>=b) return a-b;
	else return b-a;
}

int main()
	{
		int m;
		while(cin>>m)
		{
			int a[m][m],i,j;
			vector<pair<int,int> > one,three;
			string s;

			for(i=0;i<m;i++)
			{
				cin>>s;
				for(j=0;j<m;j++)
				{
					// cin>>a[i][j];
					a[i][j] = s[j] - '0';
					if(a[i][j]==1)
					{
						one.push_back(make_pair(i,j));
					}
					else if(a[i][j]==3)
					{
						three.push_back(make_pair(i,j));
					}
				}
			}

			int o = one.size(),t = three.size();
			vector<int> res;

			int min,val;

			for(i=0;i<o;i++)
			{
				min = HIGH;
				for(j=0;j<t;j++)
				{
					val = absolute(one[i].first,three[j].first) + absolute(one[i].second,three[j].second);
					if(val<min)
						min = val;

				}
				res.push_back(min);
			}

			sort(res.begin(),res.end(),greater<int>());
			cout<<res[0]<<endl;
		}
		return 0;
	}