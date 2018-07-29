#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n){

		int Log2 = 0;
		double temp=n;
		while(n>>=1)
			{
				cout<<"Current val of n = "<<n<<endl;
				Log2++;
				//cout<<"Curre"
				//n = n>>1;

			}
		cout<<Log2<<endl;

		double val = log2(temp);

		cout<<val<<endl;


		}
return 0;
	}
	