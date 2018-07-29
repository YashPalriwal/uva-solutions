#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
	{
		ll k;
		while(cin>>k)
		{
			if(k==-1)
				return 0;
			ll i,c,flag=0,low,high,resn,resm,m;
			double n;
			low = 1;
			high = k;
		while(low<high)
			{
				// m = i*(i-1)/2;
				m=(low+high)/2;
				c = k+m*(m-1)/2;
				cout<<"m = "<<m<<endl;
				cout<<"c= "<<c<<endl;
				n = (-1+sqrt(1+8*c))/2.0;
				cout<<"n = "<<n<<endl;
				if(ceil(n+0.5)>=n)
				{
					if(ceil(n)==n)
						{
							resn = n;
							resm = m;
						}
					high = m;		
					// flag=1;
					// break;
				}
				// if(n>m)
				// 	high = m;
				else
					low = m;
				// cout<<"m = "<<m<<endl;
				// cout<<"n = "<<n<<endl;
				
			}
		// if(m==0)
		// 	m++;	
		// if(flag)
			cout<<k<<" = "<<(long long int)resm<<" + ... + "<<(long long int)resn<<endl;
		// else
		// 	cout<<k<<" = "<<(long long int)k<<" + ... + "<<(long long int)k<<endl;	
		}
	}