#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int m,n;
		while(cin>>m>>n && (m||n))
		{
			int i,j,k;
			vector<vector<int> > a;
			vector<int>::iterator it;

			for(i=0;i<m;i++)
			{
				a.push_back(vector<int>());
				for(j=0;j<n;j++)
				{
					cin>>k;
					a[i].push_back(k);
				}
			}
			cout<<endl;

			// for(i=0;i<m;i++)
			// {
			// 	for(it=a[i].begin();it!=a[i].end();it++)
			// 	{
			// 		cout<<*it<<" ";
			// 	}
			// 	cout<<endl;
			// }

			vector<pair<int,int> > index;
			vector<int> length;
			int start,end;
			int q,l,r;

			cin>>q;
			while(q--)
			{
				cin>>l>>r;
				for(i=0;i<m;i++)
				{
					it = lower_bound(a[i].begin(),a[i].end(),l);
					if(it!=a[i].end())
					{
						start = it-a[i].begin();
						it = upper_bound(a[i].begin(),a[i].end(),r);
						if(it!=a[i].begin())
						{
							end = it-a[i].begin()-1;
							index.push_back(make_pair(start,end));
							cout<<"start = "<<start<<"\t"<<"end = "<<end<<endl;
							// length.push_back(end-start+1);
						}
					}
				}

				cout<<endl;
				for(it=index.begin();it!=index.end();it++)
				{
					if(it==index.begin())
					{
						start = index.first;
						end = index.second;
					}
					else
					{
						
					}

				}
				cout<<endl;
				length.clear();
			}
			

		}
		return 0;
	}