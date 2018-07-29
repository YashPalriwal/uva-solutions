#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC,x=1;
		scanf("%d",&TC);
		while(TC--)
		{
			int n;
			scanf("%d",&n);
			int a[n],i,maxi=0;
			vector<int> ar;
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				if(i==0)
				{
					ar.push_back(a[i]);
					if(a[i]>maxi)
						maxi = a[i];
				}
				else 
					{
						ar.push_back(a[i]-a[i-1]);
						if(a[i]-a[i-1]>maxi)
							maxi = a[i]-a[i-1];
					}	
			}
			// sort(ar.begin(),ar.end(),greater<int>());
			// for(i=0;i<n;i++)
			// 	cout<<ar[i]<<" ";
			// cout<<endl;
			int max_val = maxi;
			int flag=0;
			for(i=0;i<n;i++)
			{
				if(ar[i]==max_val)
					max_val--;
				else if(ar[i]>max_val)
				{
					flag=1;
					break;
				}
			}

			if(flag)
				printf("Case %d: %d\n",x,maxi+1);
			else
				printf("Case %d: %d\n",x,maxi);
			x++;
		}
		return 0;
	}