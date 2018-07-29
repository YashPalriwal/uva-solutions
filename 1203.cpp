#include<bits/stdc++.h>
using namespace std;

// bool compare(pair<int,int> a,pair<int,int > b)
// 	{
// 		if(a.first<b.first)
// 			return 1;
// 	}
							// pq 1st val, 2nd id
int main()
	{
		string s;
		map<int,int> mp;
		map<int,int>::iterator it;
		priority_queue<pair<int ,int >,vector<pair<int,int> >, greater<pair<int,int> > > pq;

		while(cin>>s)
		{
			if(s=="#")
				break;
			else
			{
				int q,p;
				cin>>q>>p;
				mp.insert(make_pair(q,p));
				pq.push(make_pair(p,q));
			}
		}


		int k,val,i,q1,p1;
		cin>>k;
		for(i=0;i<k;i++)
		{
			cout<<pq.top().second<<endl;
			q1 = pq.top().second;
			p1 = mp[q1];
			val = pq.top().first;
			pq.pop();
			pq.push(make_pair(val+p1,q1));

			// cout<<"value removed -> "<<val<<"\tId -> "<<q1<<endl;
			// cout<<"value added -> "<<val+p1<<"\tID -> "<<q1<<endl;

		}

		
		return 0;
	}