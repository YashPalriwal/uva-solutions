#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		int a,b;
		scanf("%d",&TC);
		while(TC--)
		{
			scanf("%d%d",&a,&b);
			if(a<b)
				printf("<\n");
			else if(a==b)
				printf("=\n");
			else
				printf(">\n");
		}
		return 0;
	}