#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
	{
		ll m,n;
		while(scanf("%lld%lld",&n,&m)==2)
		{
			ll a[n],i,ma=0,sum=0;
			for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);
				if(a[i]>ma)
					ma = a[i];
				sum += a[i];
			}
			if(m>=n)
				printf("%lld\n",ma);
				// cout<<ma<<endl;
			else if(m==1)
				printf("%lld\n",sum);
			else
			{
				ll low,high,mid,maxi=sum,maxi_c=0,parsum,cou,flag=0;
				low = ma;
				high = sum;
	
				for(int j=0;j<45;j++)
				{
					// cout<<"high = "<<high<<endl;
					// cout<<"low = "<<low<<endl;
					parsum = 0;
					cou = 1;
					flag=0;
					mid = (low+high)/2;
					// cout<<"mid = "<<mid<<endl;
					for(i=0;i<n;i++)
					{
						// cout<<"parsum = "<<parsum<<endl;
						if(parsum+a[i]<mid)
							{	
								parsum += a[i];
								if(flag)
								{
									flag=0;
									cou++;
								}
							}
						else if(parsum+a[i]>mid)
						{
							parsum = a[i];
							cou++;
							
						}	
						else
							{
								parsum = 0;
								flag=1;
							}		
					}
					if(cou>m)
						{
						low = mid;
						}

					else
						{
						high = mid;
						if(maxi_c<m && mid<maxi && cou<=m && cou>=maxi_c)
							{
								maxi = mid;
								maxi_c = cou;
							}	
						else if(maxi_c==m && mid<maxi && cou==m)
							maxi = mid;
						// if(cou==m && mid<maxi)
						// 	{
						// 		maxi = mid;
						// 		// cout<<maxi<<endl;
						// 	}	
						}
					// cout<<"cou = "<<cou<<endl;
					if(low==high)
						{
						if(cou<=m)	
							maxi = mid;
						break;
						}
				
				}
				printf("%lld\n",maxi);
				// cout<<maxi<<endl;

			}

		}
		return 0;
	}