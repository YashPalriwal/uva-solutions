#include<bits/stdc++.h>
using namespace std;

bool compare(char a, char b)
	{
		int x,y;
		if(a>=65 && a<=90)
			x = 2*(a-65);
		else
			x = 2*(a-97)+1;
		if(b>=65 && b<=90)
			y = 2*(b-65);
		else
			y = 2*(b-97)+1;
		return x<y;
	}

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			string s;
			cin>>s;
			sort(s.begin(),s.end(),compare);
			cout<<s<<endl;
			while(1)
			{
				if(next_permutation(s.begin(),s.end(),compare))
				{
					cout<<s<<endl;
				}
				else 
					break;
			}
		}
		return 0;
	}