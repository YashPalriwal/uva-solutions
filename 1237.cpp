#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int d,i;
			cin>>d;
			string s[d];
			int low[d],high[d];
			for(i=0;i<d;i++)
			{
				cin>>s[i]>>low[i]>>high[i];
			}
			int c,q,val,index,flag;
			cin>>q;
			while(q--)
			{
				c=0;
				flag=0;
				cin>>val;
				for(i=0;i<d;i++)
				{
					if(val>=low[i] && val<=high[i])
					{
						if(c==0)
							index = i;
						c++;
						if(c>1)
						{
							flag=1;
							break;
						}

					}
				}

				if(!flag && c==1)
				{
					cout<<s[index]<<endl;
				}
				else
					cout<<"UNDETERMINED"<<endl;

			}
			if(TC!=0)cout<<endl;
		}
		return 0;
	}