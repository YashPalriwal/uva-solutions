#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int m,n;
		register int i;
		while(scanf("%d%d",&m,&n) && (m||n))
		{
			set<int> s;
			int res=0,a;
			for(i=0;i<m;i++)
			{
				scanf("%d",&a);
				s.insert(a);
			}
			for(i=0;i<n;i++)
			{
				scanf("%d",&a);
				if(s.count(a)==1)
				{
					res++;
					s.erase(a);
				}
			}
			printf("%d\n",res);
		}
		return 0;
	}