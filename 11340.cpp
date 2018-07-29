#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int k,i;
			cin>>k;
			char c;
			int a;
			map<char,int> mp;
			map<char,int>::iterator it;
			for(i=0;i<k;i++)
			{
				cin>>c>>a;
				mp.insert(make_pair(c,a));
			}

			int m;
			cin>>m;
			cin.ignore();
			
			string s;
			double val=0;
			int j,x;

			for(i=0;i<m;i++)
			{
				getline(cin,s);
				x = s.length();
				for(j=0;j<x;j++)
				{
					if(mp.count(s[j]))
						val += mp[s[j]];
				}

			}
			printf("%.2f$\n",val/100);
		}
		return 0;
	}