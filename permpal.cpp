#include<bits/stdc++.h>
using namespace std;

//n = 1,2,3,4
int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			string s;
			int i,j,n,a[26]= {0};
			int odd=0,flag=0;
			cin>>s;
			n = s.length();
			for(i=0;i<n;i++)
			{
				a[s[i]-97]++;
			}
			for(i=0;i<26;i++)
			{
				if(a[i]%2!=0 && a[i]>0) odd++;
			}
			if(n%2==0 && odd>0) {cout<<"-1"<<endl;flag=1;}
			else if(n%2!=0 && odd%2==0) {cout<<"-1"<<endl;flag =1;}
			if(flag==0)
			{
				/*if(n%2==0)
				{
					j=0;
					char c[n];
					for(i=0;i<26;i++)
					{
						while(a[i]!=0)
						{
							c[j] = i+97;
							c[n-1-j] = c[j];
							j++;
							a[i] -= 2;
						}
					}
					cout<<c<<endl;
				}*/
			}
		}
	}