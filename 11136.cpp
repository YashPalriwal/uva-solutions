#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(scanf("%d",&n) && n)
		{
			int m,i,j,val;
			long long int res=0;
			multiset<int,greater<int> > mset;
			multiset<int,greater<int> >::iterator it;

			for(i=0;i<n;i++)
			{
				scanf("%d",&m);
				for(j=0;j<m;j++)
				{
					scanf("%d",&val);
					mset.insert(val);
					// mset1.insert(val);
				}
			// cout<<"Multiset -> ";
			// for(it=mset.begin();it!=mset.end();it++)
			// {
			// 	cout<<*it<<" ";
			// }		
			// cout<<endl;
			it = mset.begin();	
			res += *it;
			mset.erase(it);
			it = prev(mset.end());
			res -= *it;
			mset.erase(it);
			
			// cout<<"Updated Multiset -> ";
			// for(it=mset.begin();it!=mset.end();it++)
			// {
			// 	cout<<*it<<" ";
			// }		
			// cout<<endl;

		}	
		cout<<res<<endl;

			
		}
		return 0;
	}