#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n)
		{
			map<string,int> mp;
			pair<map<string,int>::iterator,bool> ptr;
			int i,j,a[5];


			string key[n],max_key;
			int max_val=1;
			
			for(i=0;i<n;i++)
			{
				//string s;
				for(j=0;j<5;j++)
				{
					cin>>a[j];
				}
				sort(a,a+5);
				for(j=0;j<5;j++)
				{
					// cout<<to_string(a[j])<<endl;
					key[i] += to_string(a[j]);
				}
				ptr = mp.insert(pair<string,int> (key[i],1));
				if(!ptr.second)
					{
						mp[key[i]]++;
						if(mp[key[i]]>max_val)
						{
							max_val = mp[key[i]];
							// max_key = key[i];
						}
					}	
			}

			int ans=0;
			for(i=0;i<n;i++)
			{
				if(max_val==mp[key[i]])
					ans++;
			}

			

			cout<<ans<<endl;
		}
		return 0;
	}