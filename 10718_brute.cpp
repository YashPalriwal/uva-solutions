#include<bits/stdc++.h>
using namespace std;

int main()	
	{
	long long int n,l,u;
	while(cin>>n>>l>>u)
		{
			long long int i;
			unsigned int res=0;
			// for(i=l;i<=u;i++)
			// {
			// 	// cout<<"i|n = "<< (i|n) <<endl;
			// 	if((i|n) > max_val)
			// 		{
			// 			max_res = i;
			// 			max_val = i|n;
			// 			// cout<<"Max_val = "<<max_val<<endl;
			// 			// cout<<"Max res = "<<max_res<<endl;
			// 		}	
			// }
			// cout<<max_res<<endl;

			bitset<32> val(n);
			for(i=31;i>=0;i--)
			{
				if(res+ (1<<i)<=l)
					res += (1<<i);
				else if(!val[i])
				{
					if(res + (1<<i) <= u)
					{
						res += (1<<i);
					}
				}
			}
			cout<<res<<endl;

		}	
		return 0;
	}