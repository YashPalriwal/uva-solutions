#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		int x=1;
		string c;
		cin.ignore();
		if(x==1)
			getline(cin,c);
		// cout<<"String c is -> "<<c<<endl;
		

		while(TC--){
		string s;
		int value,total=0;
		map<string,int> mp;
		pair< map<string,int>::iterator,bool > ptr;

		while(getline(cin, s) && !s.empty())
		{
			total++;
			ptr = mp.insert(pair<string,int> (s,1));
			if(!ptr.second)
				mp[s]++;
		}

		map<string,int>::iterator it;
		double res;

		for(it=mp.begin();it!=mp.end();it++)
		{
			res = (it->second*100.0)/total;
			cout<<it->first<<" ";
			printf("%0.4f\n",res);
		}
		x++;
		if(TC)
			cout<<endl;
	}
		return 0;
	}