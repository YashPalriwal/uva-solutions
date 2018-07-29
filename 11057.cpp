#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(scanf("%d",&n)==1)
		{
			// if(x>1) cout<<endl;
			// x++;
			int a[n],i;
			multiset<int> ms;
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				ms.insert(a[i]);
			}
			int sum,x,y;
			scanf("%d",&sum);
			int diff=0;
			int min_diff = 1000002,res1,res2;
			for(i=0;i<n;i++)
			{
				y = sum-a[i];
				x = ms.count(y);
				if(x)
					{
						if(y!=a[i])
							{
								if(a[i]<=y)
									{
										diff = y-a[i];
										if(diff<min_diff)
										{
											min_diff = diff;
											res1 = a[i];
											res2 = y;
										}
									}
								else
								{
									diff = a[i]-y;
									if(diff<min_diff)
										{
											min_diff = diff;
											res1 = y;
											res2 = a[i];
										}
								}	
								
							}
						else
						{
							if(x>1)
								{
									if(a[i]<=y)
									{
										diff = y-a[i];
										if(diff<min_diff)
										{
											min_diff = diff;
											res1 = a[i];
											res2 = y;
										}
									}
								else
								{
									diff = a[i] - y;
									if(diff<min_diff)
										{
											min_diff = diff;
											res1 = y;
											res2 = a[i];
										}
								}
									
								}
						}
					}
			}
			printf("Peter should buy books whose prices are %d and %d.\n\n",res1,res2);
		
		}
		return 0;
	}