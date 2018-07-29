#include<bits/stdc++.h>
using namespace std;

int main()	
	{
		int b,s,x=1;
		multiset<int> bach,spin;
		multiset<int>::iterator it,iter,itr;

		while(cin>>b>>s && (b||s))
		{
			int i,a,val;
			

			for(i=0;i<b;i++)
			{
				cin>>a;
				bach.insert(a);
			}
			for(i=0;i<s;i++)
			{
				cin>>a;
				spin.insert(a);
			}

			for(i=0;i<10001;i++)
			{
				// cout<<"bach.size = "<<bach.size()<<endl;
				// cout<<"spin.size = "<<spin.size()<<endl;

				if(bach.empty() || spin.empty())
					break;
				it = bach.end();
				--it;
				// cout<<"Inspecting bachelor  = "<<*it<<endl;
				if(binary_search(spin.begin(),spin.end(),*it))
				{
					iter = spin.find(*it);
					// cout<<"MAtched spinster = "<<*iter<<endl;
					spin.erase(iter);
					bach.erase(it);

				}
				else
				{
					itr = lower_bound(spin.begin(),spin.end(),*it);

					if(itr==spin.end())
					{
						--itr;
						bach.erase(it);
						// cout<<"MAtched spinster = "<<*itr<<endl;
						spin.erase(itr);
					}

					else if(itr!=spin.begin())
					{
						iter = itr;
						--iter;
						// cout<<"diff 1 = "<<abs(*iter - *it)<<endl;
						// cout<<"diff 2 = "<<abs(*itr - *it)<<endl;
						if(abs(*iter - *it)<=abs(*itr - *it))
						{
							bach.erase(it);
							// cout<<"MAtched spinster = "<<*iter<<endl;
							spin.erase(iter);
						}
						else
						{
							bach.erase(it);
							// cout<<"MAtched spinster = "<<*itr<<endl;
							spin.erase(itr);
						}
					}
					else
					{
						bach.erase(it);
						// cout<<"MAtched spinster = "<<*itr<<endl;
						spin.erase(itr);
							
					}
				}

			}

			if(!bach.empty())
			{
				it = bach.begin();
				cout<<"Case "<<x<<": "<<bach.size()<<" "<<*it<<endl;
				x++;
			}
			else
			{
				cout<<"Case "<<x<<": 0"<<endl;
				x++;
			}
			bach.clear();
			spin.clear();
		}
		return 0;
	}