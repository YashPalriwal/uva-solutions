#include<bits/stdc++.h>
using namespace std;

int main()
	{
		string s,st;
		cin>>s;
		int q,i,j,n,in,flag,start,end;
		scanf("%d",&q);
		vector<int> v[70];
		vector<int>::iterator it;
		n = s.length();
		for(i=0;i<n;i++)
		{
			v[s[i]-'A'].push_back(i);
		}
		for(i=0;i<q;i++)
		{
			cin>>st;
			n = st.length();
			in=0;
			flag=0;
			for(j=0;j<n;j++)
			{
				it = lower_bound(v[st[j]-'A'].begin(),v[st[j]-'A'].end(),in);
				if(it!=v[st[j]-'A'].end())
				{
					if(binary_search(v[st[j]-'A'].begin(),v[st[j]-'A'].end(),in))
						{
							in = *it+1;
							if(j==0)
								start = in-1;
							if(j==n-1)
								end = in-1;
						}	
					else 
						{
							in = *it+1;
							if(j==0) 
								start = in-1;
							if(j==n-1)
								end = in-1; 
						}	

				}
				else
				{
					flag=1;
					break;
				}
			}

			if(flag)
				printf("Not matched\n");
			else
				printf("Matched %d %d\n",start,end);
		}
		return 0;
	}