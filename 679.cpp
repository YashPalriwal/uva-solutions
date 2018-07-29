#include<bits/stdc++.h>
using namespace std;
int val;

int main()
	{
		int TC;
		scanf("%d",&TC);
		while(TC--)
		{
			int d,b;
			scanf("%d%d",&d,&b);
			b = b%(1<<(d-1));
			int a[d-1],i;
			b--;
			int root=1;

			for(i=d-2;i>=0;i--)
			{
				a[i] = (1<<i)&b;
			}
			for(i=0;i<d-1;i++)
			{
				if(a[i])
					root = 2*root+1;
				else
					root = 2*root;
			}
			printf("%d\n",root);


		}
		scanf("%d",&TC);
		return 0;	
	}