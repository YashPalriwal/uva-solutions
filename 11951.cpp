#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define HIGH 9999999999999

ll a[100][100];
int main()
	{
		ll TC,x=1;
		scanf("%lld",&TC);
		// cin>>TC;
		while(TC--)
		{
			ll r,c,i,j,k,l,p;
			scanf("%lld%lld%lld",&r,&c,&p);
			// cin>>r>>c>>p;
			
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{	
					// cin>>a[i][j];
					scanf("%lld",&a[i][j]);
					if(i>0)
						a[i][j] += a[i-1][j];
					if(j>0)
						a[i][j] += a[i][j-1];
					if(i>0 && j>0)
						a[i][j] -= a[i-1][j-1];
				}
			}

			ll sum,max_val=HIGH,area=0,s_area;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					for(k=i;k<r;k++)
					{
						for(l=j;l<c;l++)
						{
							sum = a[k][l];
							if(i>0)
								sum -= a[i-1][l];
							if(j>0)
								sum -= a[k][j-1];
							if(i>0 && j>0)
								sum += a[i-1][j-1];
							s_area = (k-i+1)*(l-j+1);
							if(s_area>area && sum<=p)
							{
								area = s_area;
								max_val = sum;
							}
							else if(s_area==area && sum<max_val)
							{
								max_val = sum;
							}
						}
					}
				}
			}
			if(max_val == HIGH)
				printf("Case #%lld: 0 0\n",x);
				// cout<<"Case #"<<x<<": 0 0"<<endl;
			else
				printf("Case #%lld: %lld %lld\n",x,area,max_val);
				// cout<<"Case #"<<x<<": "<<area<<" "<<max_val<<endl;
			x++;
		}
		return 0;
	}