#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n,k;
			cin>>n>>k;
			cout<< (k^(k>>1)) << endl;
		}
		return 0;
	}