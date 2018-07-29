#include<bits/stdc++.h>
using namespace std;

int main()
	{
		vector<int> v;
		int n;
		int c=0;
		while(cin>>n)
		{
			c++;
			v.push_back(n);
			sort(v.begin(),v.end());
			if(c%2!=0)
			{
				cout<<v[c/2]<<endl;
			}
			else
			{
				long long sum = v[c/2] + v[(c/2)-1];
				cout<<sum/2<<endl;
			}
		}
		return 0;
	}