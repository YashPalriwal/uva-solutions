#include<bits/stdc++.h>
using namespace std;
long long int ans=-999999;

long long int func(vector<long long int> a,long int start,long long int end)
	{
		long long int n = end-start+1,i;
		long long int prod[n+1];
		prod[0] = 1;
		// cout<<"start = "<<start<<endl;
		// cout<<"end = "<<end<<endl;

		for(i=start;i<=end;i++)
			{
				
				prod[i+1-start]=a[i]*prod[i-start];
				// cout<<"prod["<<i+1-start<<"] = "<<prod[i+1-start]<<endl;
			}
		if(prod[n]>0)
			 return prod[n];
		else if(prod[n]<0)
			{
				if(n==1)
					return prod[n];
				else
				{
					long long int pre=1,suf=1;
					for(i=start;i<=end;i++)
					{
						pre *= a[i];
						if(a[i]<0)
							break;
					}
					// cout<<"pre = "<<pre<<endl;
					for(i=end;i>=start;i--)
					{
						suf *= a[i];
						if(a[i]<0)
							break;
					}
					// cout<<"suf = "<<suf<<endl;
					prod[n] = prod[n]/(max(pre,suf));
					return prod[n];
				}
			}
	}

int main()
	{
		vector<long long int> a;
		long long int x;
		while(cin>>x)
		{
			a.push_back(x);
			while(1)
			{
				cin>>x;
				if(x==-999999)
					break;
				a.push_back(x);
			}
			long long int n = a.size(),i;
			long long int prod[n+1];
			prod[0] = 1;
			for(i=0;i<n;i++)
			{
				if(prod[i]!=0)
					prod[i+1]=a[i]*prod[i];
				else
					prod[i+1] = a[i]*prod[i];
			}
			if(prod[n]>0)
				cout<<prod[n]<<endl;
			else if(prod[n]<0)
			{
				if(n==1)
					cout<<prod[n]<<endl;
				else
				{
					long long int pre=1,suf=1;
					for(i=0;i<n;i++)
					{
						pre *= a[i];
						if(a[i]<0)
							break;
					}
					for(i=n-1;i>=0;i--)
					{
						suf *= a[i];
						if(a[i]<0)
							break;
					}
					prod[n] = prod[n]/(max(pre,suf));
					cout<<prod[n]<<endl;
				}
			}
			else if(prod[n]==0)
			{
				long long int start=0,end=-1,flag=0;
				for(i=0;i<n;i++)
				{
					if(flag && a[i]!=0)
					{
						flag=0;
						start = i;
						end = i-1;
					}
					if(a[i]!=0 && !flag)
						end++;
					if(a[i]==0 && !flag)
					{
						flag=1;
						if(end>=start)
							ans = max(ans,func(a,start,end));
						
					}
					if(i==n-1)
					{
						if(!flag)
						{
							if(a[n-1]!=0)
							{
								end = n-1;
							}
							// else
							// 	end = n-2;
							if(end>=start)
								ans = max(ans,func(a,start,end));
						}
						if(flag)
						{
							if(a[i]!=0)
							{
								ans = max(ans,a[n-1]);
							}
						}
					}
					
				}
				if(ans>0)
					cout<<ans<<endl;
				else
					cout<<"0"<<endl;
			}
			a.clear();
			ans = -999999;
		}
		return 0;
	}