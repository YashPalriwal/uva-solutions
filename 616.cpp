#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int n;
		while(scanf("%lld",&n))
		{
			if(n<0) return 0;

			long long int x = sqrt(n)+1,i;
			queue<long long int> q;

			for(i=x;i>=2;i--)
			{
				if(n%i==1)
					q.push(i);
			}
			long long int temp,flag=1,res;
			while(!q.empty() && flag)
			{
				flag=0;
				temp = n;

				// cout<<"q.front = "<<q.front()<<endl;
				for(i=1;i<q.front();i++)
				{
					temp = (temp-1)*(q.front()-1)/q.front();
					// cout<<"temp = "<<temp<<endl;
					if(temp%q.front()!=1)
					{
						flag=1;
						q.pop();
						break;
					}
				}

				if(!flag && ((temp-1)*(q.front()-1)/q.front())%q.front()==0)
				{
					res = q.front();
					flag = 0;
				}
				else if(!flag &&  ((temp-1)*(q.front()-1)/q.front())%q.front())
				{
					flag=1;
					q.pop();
				}
			}

			if(!q.empty()) cout<<n<<" coconuts, "<<res<<" people and 1 monkey"<<endl;
			else cout<<n<<" coconuts, no solution"<<endl;

		}
	}