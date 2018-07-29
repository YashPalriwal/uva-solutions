#include<bits/stdc++.h>
using namespace std;
#define HIGH 999999999

int main()
	{
		int n,x=1;
		while(cin>>n && n)
		{
			int a[n],i,j;
			vector<int> sum;
			for(i=0;i<n;i++)
				cin>>a[i];
			for(i=0;i<n-1;i++)
			{
				for(j=i+1;j<n;j++)
				{
					sum.push_back((a[i]+a[j]));
				}
			}
			sort(sum.begin(),sum.end());

			int m,val,diff,n1=sum.size();
			cin>>m;
			cout<<"Case "<<x<<":\n";
			x++;
			while(m--)
			{

				//diff = HIGH;
				cin>>val;
				for(i=0;i<n1;i++)
				{

					if(val==sum[i])
						{
							cout<<"Closest sum to "<<val<<" is "<<sum[i]<<".\n";
							break;
						}
					else if(sum[i]>val)
					{	
						if(i==0)cout<<"Closest sum to "<<val<<" is "<<sum[i]<<".\n";
						else if(i>0)
						{
							if(sum[i]-val<val-sum[i-1])
								cout<<"Closest sum to "<<val<<" is "<<sum[i]<<".\n";
							else
								cout<<"Closest sum to "<<val<<" is "<<sum[i-1]<<".\n";
						}
						break;
					}
				}

				if(val>sum[n1-1])
					cout<<"Closest sum to "<<val<<" is "<<sum[n1-1]<<".\n";

				
			}
		}
		return 0;
	}