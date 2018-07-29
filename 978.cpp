#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int s,sg,sb,i,val;
			cin>>s>>sg>>sb;
			multiset<int,greater<int> > g,b;
			multiset<int,greater<int> >::iterator itr,itr1;

			vector<int> green,blue;
			vector<int>::iterator it;
			for(i=0;i<sg;i++)
			{
				cin>>val;
				g.insert(val);
			}
			for(i=0;i<sb;i++)
			{
				cin>>val;
				b.insert(val);
			}


			while(!g.empty() && !b.empty())
			{
				s = (int) min(s,(int)min(g.size(),b.size()));
				for(i=0;i<s;i++)
				{
					itr = g.begin();
					itr1 = b.begin();
				
					if(*itr == *itr1)
					{
						g.erase(itr);
						b.erase(itr1);
					}
					else if(*itr > *itr1)
					{
						val = *itr- *itr1;
						green.push_back(val);
						g.erase(itr);
						b.erase(itr1);

					}
					else
					{
						val = *itr1 - *itr;
						// b.insert(val);
						blue.push_back(val);
						g.erase(itr);
						b.erase(itr1);
					}
				
				}
				for(it=green.begin();it!=green.end();it++)
				{
					g.insert(*it);
				}
				for(it=blue.begin();it!=blue.end();it++)
				{
					b.insert(*it);
				}
				green.clear();
				blue.clear();
			}

			if(g.empty() && b.empty())
				cout<<"green and blue died"<<endl;
			else if(!b.empty())
			{
				cout<<"blue wins"<<endl;
				for(itr=b.begin();itr!=b.end();itr++)
					cout<< *itr <<endl;
			}

			else if(!g.empty())
			{
				cout<<"green wins"<<endl;
				for(itr=g.begin();itr!=g.end();itr++)
					cout<< *itr <<endl;	
			}

		if(TC) cout<<endl;	
		}
		return 0;
	}