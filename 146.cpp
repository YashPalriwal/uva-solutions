#include<bits/stdc++.h>
using namespace std;

int main()
	{
		char s[50];
		while(scanf("%s",s))
		{
			if(s[0]=='#') return 0;
			// string temp;
			char c[50];
			int a[26] = {0};
			int i,j,n = strlen(s);
			for(i=0;i<n;i++)
				{
					c[i] = s[i];
					//a[c[i]-97]++;
				}
			sort(c,c+n,greater<char>());
			int flag=1,k;
			for(i=0;i<n;i++)
				{
					if(s[i]!=c[i])
					{
						flag=0;
						break;
					}
				}
			if(flag==1)	cout<<"No Successor"<<endl;
			else
			{
				for(i=n-1;i>0;i--)
				{
					//if(s[i]<=s[i-1]) 
					//{
						// swap(s[i],s[i-1]);
						//break;
						a[s[i]-97]++;
					//}
					 if(s[i]>s[i-1])
					{
						flag=1;
						//a[s[i]-97]++;
						for(j=s[i-1]-97+1;j<26;j++)
						{
							if(a[j]>0)
							{
								for(k=i;k<n;k++)
								{
									if(s[k]==j+97)
									{
										swap(s[k],s[i-1]);
										// cout<<"s[i-1] changed from "<<s[i-1]<<" to "<<s[k]<<endl;
										flag=0;
										break;
									}
								}
							break;	
							}

						}
					if(flag==0) break;	
					}
				}
				//n = sizeof(s[0])/sizeof(char);
				// cout<<"Sorting from indices "<<i<<" to "<<n<<endl;
				sort(s+i,s+n);
				cout<<s;
				cout<<endl;
			}

		}
	}