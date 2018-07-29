#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		cin>>n;
		int i,j;
		vector<int> v;
		vector<int>::iterator it;
		for(i=0;i<n;i++)
		{
			cin>>j;
			v.push_back(j);
		}
		int q;
		cin>>q;
		while(q--){
			cin>>j;
		if(binary_search(v.begin(),v.end(),j))
		{
			it = lower_bound(v.begin(),v.end(),j);
			if(it!=v.begin()) cout<<v[it-v.begin()-1]<<" ";
			else cout<<"X ";
		}
		else
			{
				it = lower_bound(v.begin(),v.end(),j);
				if(it!=v.end() && it!=v.begin()) cout<<v[it-v.begin()-1]<<" ";
				else if(it==v.begin())
					cout<<"X ";
				else
					cout<<v[n-1]<<" ";
			}	

		it = upper_bound(v.begin(),v.end(),j);
		if(it!=v.end())
			cout<<v[it-v.begin()]<<endl;
		else
			cout<<"X"<<endl;

		}
		return 0;
	}