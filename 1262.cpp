#include<bits/stdc++.h>
using namespace std;
char c1[6][5],c2[6][5];
int k;
int cou=0;
int flag=1;
int res=0;

void print(char sol[])
{
	for(int i=0;i<5;i++)
		cout<<sol[i];
	cout<<endl;
}

void password(int index, char sol[])	// to remove identical elements??
	{
		if(index==5)
		{
			cou++;
			
			if(cou==k)
			{
				res=1;
				print(sol);
				flag=0;
			}
		}
		else if(flag)
		{
			for(int i=0;i<6;i++)
			{
				for(int j=0;j<6;j++)
				{
					if(c1[i][index]==c2[j][index] && c1[i][index]!='-')
					{
						sol[index] = c1[i][index];
						password(index+1,sol);
						sol[index] = '-';
					}
				}
			}
			sol[index] = '-';
		}
	}







int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			// int k;
			cin>>k;
			int i,j;
			for(i=0;i<6;i++)
			{
				cin>>c1[i];
			}
			for(i=0;i<6;i++)
			{
				cin>>c2[i];			// sort a matrix of char vertically
			}

			// string s,s2;
			set<char> s,s2;
			set<char>::iterator it,iter;
			for(j=0;j<5;j++)
			{
				// s = "";
				// s2 = "";
				for(i=0;i<6;i++)
				{
					// s += c1[i][j];
					// s2 += c2[i][j];
					s.insert(c1[i][j]);
					s2.insert(c2[i][j]);
				}
				
				// sort(s.begin(),s.end());
				
				// sort(s2.begin(),s2.end());
				it = s.begin();
				for(i=0;i<6;i++)
				{
					if(it!=s.end())
						{
							c1[i][j] = *it;
							++it;
						}
					else
						c1[i][j] = '-';
				}
				it = s2.begin();
				for(i=0;i<6;i++)
				{
					if(it!=s2.end())
						{
							c2[i][j] = *it;
							++it;
						}
					else
						c2[i][j] = '-';
				}
				s.clear();
				s2.clear();
			}
			char sol[5];
			for(i=0;i<5;i++)
				sol[i] = '-';
			// cout<<"Case "<<x<<": ";
			// x++;
			password(0,sol);
			
			if(!res)
				cout<<"NO"<<endl;
			cou=0;
			flag=1;
			res=0;

		}
		return 0;
	}