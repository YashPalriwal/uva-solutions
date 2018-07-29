#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n,i;
			cin>>n;
			int a[10] = {0},x;
			for(i=1;i<=n;i++)
			{
				x = i;
				while(x)
				{
					a[x%10]++;
					x = x/10;
				}
			}
			for(i=0;i<10;i++)
			{
				if(i!=9) cout<<a[i]<<" ";
				else cout<<a[i];
			}
			cout<<endl;
		}
		return 0;
	}