#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC,tc=0;
		cin>>TC;
		while(TC--)
		{
			vector<string> v;
			string s1;
			int x=0;
			
			if(tc==0)cin.ignore();
			
			while(getline(cin, s1))
			{
				if(s1.empty() && x>0)
					break;				
				else if(x>0) v.push_back(s1);
				x++;
			}
				
			int i,n=v.size(),j;
			
			vector<string> s,temp;
			for(i=0;i<n;i++)
			{
				for(j=0;j<v[i].length();j++)
				{
					if((v[i][j]>=65 && v[i][j]<=90) || (v[i][j]>=97 && v[i][j]<=122))
					{
						if(s[i].empty())
							s.push_back({1,v[i][j]});
						else
						s[i] += v[i][j];
					}
				}
			}

			for(i=0;i<n;i++)
				cout<<s[i]<<endl;	
		}
	}