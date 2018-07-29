#include<bits/stdc++.h>
using namespace std;
int x[10];

int strike(string s,int index)
	{
		int i,n,val=10,flag=0;
		n = s.length();
		for(i=index+1;i<n;i++)
		{
			if(flag==2) break;
			if(s[i]!=32)
			{
				if(s[i]>=48 && s[i]<=56)
				{
					val += s[i]-48;
					flag++;
				}
				else if(s[i]=='X'||s[i]=='/')
				{
					val = 20;
					break;
				}
			}
		}
		return val;
	}

int spare(string s,int index)
	{
		int i,n,val;
		val = 10-(s[index-2]-48);
		if(s[index+2]!='X') val += s[index+2]-48;
		else val = 20-(s[index-2]-48);
		return val;
	}	

int main()
	{
		string s;
		while(getline(cin, s))
		{
			if(s == "Game Over") return 0;
			
			for(int k=0;k<10;k++)
				x[k] = 0;
			int n = s.length(),i,sum=0,count=0;
			for(i=0;i<n;i++)
			{
				if(s[i]>=48 && s[i]<=56 && count<20) {sum+= s[i]-48;count++;}
				else if(s[i]=='X' && count<20) {sum += strike(s,i);count+=2;}
				else if(s[i]=='/' && count<20) {sum += spare(s,i);count++;}
			}

			cout<<sum<<endl;

		}
	}