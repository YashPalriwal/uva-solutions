#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(scanf("%d",&n)==1)
		{
			int i,j,a[n][n];
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
					if(i>0)
						a[i][j] += a[i-1][j];
					if(j>0)
						a[i][j] += a[i][j-1];
					if(i>0 && j>0)
						a[i][j] -= a[i-1][j-1];
				}
			}
			int k,l;
			int sum,maxS=-127*10000;
			for(i=0;i<n;i++) 			// selecting the start indices
				{	
					for(j=0;j<n;j++)
						{	
							for(k=i;k<n;k++)		// selecting the end indices
								{
									for(l=j;l<n;l++)
									{
										sum = a[k][l];
										if(i>0)
											sum -= a[i-1][l];
										if(j>0)
											sum -= a[k][j-1];
										if(i>0 && j>0)
											sum += a[i-1][j-1];
										maxS = max(maxS,sum);
									}
								}
						}
				}					
			printf("%d\n",maxS);			
		}
		return 0;
	}