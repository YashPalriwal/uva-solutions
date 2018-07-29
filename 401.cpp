#include<bits/stdc++.h>
using namespace std;

int main()
	{
		string s;
		while(cin>>s)
		{
			// cout<<"s = "<<s<<endl;
			int pal=0,mir=0,flag=0;
			string temp = s;
			reverse(temp.begin(),temp.end());
			// cout<<"temp = "<<temp<<endl;
			if(temp==s)
				pal = 1;
			int n = s.length(),i;
			string s1;
			for(i=0;i<n;i++)
			{
				if(s[i]=='A' || s[i]=='H' ||s[i]=='I' ||s[i]=='M'||s[i]=='O' ||(s[i]>=84 && s[i]<=89) ||s[i]=='1' ||s[i]=='8')
				{
					s1.push_back(s[i]);
				}
				else if(s[i]=='E')
					s1.push_back('3');
				else if(s[i]=='3')
					s1.push_back('E');
				else if(s[i]=='J')
					s1.push_back('L');
				else if(s[i]=='L')
					s1.push_back('J');
				else if(s[i]=='S')
					s1.push_back('2');
				else if(s[i]=='2')
					s1.push_back('S');
				else if(s[i]=='Z')
					s1.push_back('5');
				else if(s[i]=='5')
					s1.push_back('Z');
				else
				{
					flag=1;
					break;
				}

			}

			// cout<<"s1 = "<<s1<<endl;
			// cout<<"flag = "<<flag<<endl;

			if(!flag)
			{
				//temp = s1;
				reverse(s1.begin(), s1.end());
				// cout<<"temp = "<<temp<<endl;
				if(s1==s)
					mir = 1;
			}

			if(pal && mir)
				cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
			else if(pal && !mir)
				cout<<s<<" -- is a regular palindrome."<<endl<<endl;
			else if(!pal && mir)
				cout<<s<<" -- is a mirrored string."<<endl<<endl;
			else
				cout<<s<<" -- is not a palindrome."<<endl<<endl;

		}
		return 0;
	}