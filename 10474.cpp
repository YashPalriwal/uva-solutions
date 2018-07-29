#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,q,x=1;
		while(cin>>n>>q && (n||q))
		{
			int i,a;
			vector<int> s;
			vector<int>::iterator it;

			for(i=0;i<n;i++)
				{
					cin>>a;
					s.push_back(a);
				}
			sort(s.begin(),s.end());	
				
			for(i=0;i<q;i++)
			{
				cin>>a;
				if(i==0)
				{
					cout<<"CASE# "<<x<<":\n";
					x++;
				}
				if(binary_search(s.begin(),s.end(),a))
				{
					cout<<a<<" found at "<<lower_bound(s.begin(),s.end(),a)-s.begin()+1<<endl;
				}
				else
					cout<<a<<" not found"<<endl;	
					
			}		
		}
		return 0;
	}