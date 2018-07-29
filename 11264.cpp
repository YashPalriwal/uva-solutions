#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int TC;
		scanf("%lld",&TC);
		while(TC--)
		{
			long long int n,i;
			scanf("%lld",&n);
			long long int k=1,sum;
			long long int a[n];
			for(i=0;i<n;i++)
				scanf("%lld",&a[i]);
			sum = a[0];
			// cout<<"selected val = "<<a[0]<<endl;
			for(i=1;i<n-1;i++)
			{
				if(sum+a[i]<a[i+1])
				{
					k++;
					// cout<<"selected val = "<<a[i]<<endl;
					sum += a[i];
				}
			}
			if(sum<a[n-1])
				k++;
			cout<<k<<endl;
		}
		return 0;
	}