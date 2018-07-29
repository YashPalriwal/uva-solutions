#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
	{
		string str;
		while(getline(cin, str))
		{
			// cout<<str<<endl;
			if(str == "DONE") return 0;
			string s;
			int i,j;
			int n = str.length();
			// cout<<"n = "<<n<<endl;
			// j=0;
			for(i=0;i<n;i++)
			{
				if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
				{
					// cout<<str[i]<<" ";
					s.push_back(str[i]);
					// cout<<s<<endl;
					// j++;
				}
			}


			// cout<<"n = "<<n<<endl;

			transform(s.begin(),s.end(),s.begin(), ::tolower);
			string temp = s;
			reverse(temp.begin(),temp.end());
			// cout<<s<<endl;		
			// cout<<temp<<endl;
			if(s==temp)
				cout<<"You won't be eaten!"<<endl;
			else
				cout<<"Uh oh.."<<endl;
		}
	}