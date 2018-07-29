#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int b,s,x=1;
		while(cin>>b>>s && (b||s))
		{
			int i,ba[b],sp[s],min=100;
			for(i=0;i<b;i++)
				{
					cin>>ba[i];
					if(min>ba[i])
						min = ba[i];
				}
			for(i=0;i<s;i++)
				cin>>sp[i];

			if(b<=s)
				cout<<"Case "<<x<<": 0\n";
			else
			{
				cout<<"Case "<<x<<": "<<b-s<<" "<<min<<endl;
			}
			x++;
		}
		return 0;
	}