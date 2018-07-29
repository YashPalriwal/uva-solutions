#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n)
		{
			bitset<32> num(n);
			// bitset<32> a;
			// bitset<32> b;

			// num[0] = 1;
			// cout<<num<<endl;

			int a=0,b=0;
			int i,e=0;
			for(i=0;i<32;i++)
			{
				if(num[i])
					{
						if(!e)
						{
							a |= 1<<i;
							e=1;
						}
						else
						{
							b |= 1<<i;
							e=0;
						}
					}
			}

			cout<<a<<" "<<b<<endl;
		}
		return 0;
	}