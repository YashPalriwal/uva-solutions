#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define HIGH 99999999999999
ll min_val = HIGH;
// ll max_dis_sum = 0;
ll n,m;

void containers(ll a[],ll index,ll sum,ll disjoint,ll max_dis_sum)
{

	if(index==n)
	{
		if(max_dis_sum<min_val && disjoint==m)
			{
				min_val = max_dis_sum;
				// cout<<endl<<"Possible min val "<<min_val<<endl;
				// print(sol);
			}
	}
	else
	{
		if(disjoint==m)			// pruning based on the number of req subsets
		{
			for(int i=index;i<n;i++)
				sum += a[i];

			containers(a,n,sum,disjoint,max(max_dis_sum,sum));
		}
		else
		{
			sum += a[index];
			max_dis_sum = max(max_dis_sum,sum);						// moving to the next disjoint set
			if(disjoint<m && max_dis_sum<min_val)
			{
				// sol[index] = 1;
				
				containers(a,index+1,0,disjoint+1,max_dis_sum);
			}
			if(n-index+1>= m-disjoint && max_dis_sum<min_val)		// pruning the recursion tree based on branch and bound
				{
				containers(a,index+1,sum,disjoint,max_dis_sum);
				}
		}
	}
}

int main()
	{
		while(scanf("%lld%lld",&n,&m)==2)
		{
			ll i,a[n],sum[n],ma=0;

			for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);
				if(a[i]>ma)
					ma = a[i];
				// if(i>0)
				// 	sum[i] += sum[i-1];
				// else
				// 	sum[i] = a[i];
			}
			// int sol[n];
			// for(i=0;i<n;i++)
			// 	sol[i] = 0;
			if(n<=m)
				printf("%lld\n",ma);
			else
			{
			containers(a,0,0,1,0);
			printf("%lld\n",min_val);
			// cout<<min_val<<endl;
			min_val = HIGH;
			}
			// max_dis_sum = 0;
		}
		return 0;
	}