#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			double s,d;
			cin>>s>>d;
			if(s<d)
			{
				cout<<"impossible"<<endl;
			}
			else
			{
				double x,y,flag=0;
				x = (s+d)/2;
				y = (s-d)/2;
				if(x!=ceil(x))
					flag=1;
				if(y!=ceil(y))
					flag=1;
				if(x<y || flag)
				{
					cout<<"impossible"<<endl;
				}
				else
				{
					cout<<(int)x<<" "<<(int)y<<endl;
				}
			}
		}
		return 0;
	}