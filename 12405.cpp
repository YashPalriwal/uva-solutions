#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC,x=1;
		scanf("%d",&TC);
		while(TC--)
		{
			int n,i;
			scanf("%d",&n);

			char c[n];
			// for(i=0;i<n;i++)
			// {
				scanf("%s",c);
			// }
			int res=0;
			for(i=0;i<n;)
			{
				if(c[i]=='.')
				{
					res++;
					i += 3;
				}
				else
					i++;
			}
			printf("Case %d: %d\n",x,res);
			// cout<<"Case "<<x<<": "<<res<<endl;
			x++;
		}
		return 0;
	}