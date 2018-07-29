#include<bits/stdc++.h>
using namespace std;

int main()
	{
		vector<int> a;
		int x;
		while(cin>>x)
			{
				a.push_back(x);
			}
		int i,n;
		n = a.size();
		int LIS[n],path[n];
		for(i=0;i<n;i++)
			LIS[i] = 1;
		path[0] = 0;
		for(i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					LIS[i] = max(LIS[i],LIS[j]+1);
					if(LIS[i]==LIS[j]+1)
						path[i] = j;
					else
						path[i] = i;
				}
			}
		}

		int lis=0,index;
		for(i=0;i<n;i++)
		{
			if(LIS[i]>=lis)
				{
					lis = LIS[i];
					index = i;
				}	
		}
		cout<<lis<<endl<<"-"<<endl;

		stack<int> p;
		p.push(a[index]);
		while(1)
		{
			if(LIS[index]==1)
				{
					// p.push(a[index]);
					break;
				}
			else
			{
				for(int j=index-1;j>=0;j--)
				{
					if(LIS[j]+1==LIS[index])
					{
						p.push(a[j]);
						index = j;
						break;
					}
				}
			}		
		}
		while(!p.empty())
		{
			cout<<p.top()<<endl;
			p.pop();
		}
		return 0;
	}