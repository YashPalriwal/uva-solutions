#include<bits/stdc++.h>
using namespace std;
#define eps 0.0000000000001

int main()
	{
		int m,n;
		while(cin>>m>>n)
		{
			if(m==1 && n==1)
				return 0;
			pair<int,int> high,low,root;
			string s;
			double val = m*1.0/n,x;
			if(val<1)
			{
				low.first = 0;
				low.second = 1;
				high.first = 1;
				high.second = 1;
				s += 'L';
			}
			else
			{
				low.first = 1;
				low.second = 1;
				high.first = 1;
				high.second = 0;
				s += 'R';
			}

		

			while(1)
			{
				root.first = high.first + low.first;
				root.second = high.second + low.second;
				x = root.first*1.0/root.second;

				if(abs(x-val)<eps)
				{
					cout<<s<<endl;
					break;
				}
				else if(val>x)
				{
					s += 'R';
					low.first = root.first;
					low.second = root.second;
				}
				else{
					s += 'L';
					high.first = root.first;
					high.second = root.second;
				}
			}
		}
	}