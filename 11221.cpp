#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
	{
		int TC;
		int x=1;
		cin>>TC;
		while(TC--)
		{
			string str,s,temp;
			if(x==1) cin.ignore();
			getline(cin, str);
			// cout<<"str = "<<str<<endl;
			int i,n = str.length();
			// cout<<"n = "<<n<<endl;
			for(i=0;i<n;i++)
			{
				if(str[i]>=97 && str[i]<=122)
				{
					s.push_back(str[i]);
				}
			}

			// cout<<"s = "<<s<<endl;

			temp = s;
			reverse(temp.begin(),temp.end());
			// cout<<"temp = "<<temp<<endl;
			if(temp!=s)
			{
				cout<<"Case #"<<x<<":\nNo magic :("<<endl;
				x++;
			}
			else
			{
				n = s.length();
				// cout<<"n = "<<n<<endl;
				float n1 = sqrt(n);
				// cout<<"n1 = "<<n1<<endl;
				int k=0;
				if(n1==ceil(n1))
				{
					char c[(int)n1][(int)n1];
					int j;
					for(i=0;i<n1;i++)
					{
						for(j=0;j<n1;j++)
						{
							c[i][j] = s[k];
							k++;
						}
					}

					string s1,temp1;

					for(i=0;i<n1;i++)
					{
						for(j=0;j<n1;j++)
						{
							s1.push_back(c[j][i]);
						}
					}
					// cout<<"s1 = "<<s1<<endl;

					if(s1!=s)
					{
						cout<<"Case #"<<x<<":\nNo magic :("<<endl;
						x++;
					}

					else if(s1==s)
					{
						temp1 = s1;
						reverse(temp1.begin(),temp1.end());
						// cout<<"temp1 = "<<temp<<endl;
						if(temp1==s1)
						{
							cout<<"Case #"<<x<<":\n"<<(int)n1<<endl;
							x++;
						}
						else
						{
							cout<<"Case #"<<x<<":\nNo magic :("<<endl;
							x++;
						}
					}
				}

				else
				{
					cout<<"Case #"<<x<<":\nNo magic :("<<endl;
							x++;
				}

			}
		}
		return 0;
	}