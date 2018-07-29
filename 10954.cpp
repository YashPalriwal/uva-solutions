#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n)
		{
			priority_queue<int,vector<int>,greater<int> > pq;
			// priority_queue<int,vector<int>,greater<int> >::iterator it,it1;
			vector<int> sum;
			int i,a;
			for(i=0;i<n;i++)
			{
				cin>>a;
				pq.push(a);
			}
			int val,res=0;
			if(n<=1)
				cout<<"0"<<endl;
			else
			{	
				while(pq.size()>1)
				{
					val =0 ;
					val += pq.top();
					pq.pop();
					val += pq.top();
					pq.pop();
					pq.push(val);
					sum.push_back(val);

				}

				val = sum.size();
				for(i=0;i<val;i++)
				{
					res += sum[i];
				}
			cout<<res<<endl;	
			}
		}
		return 0;
	}