#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(scanf("%d",&n)!=EOF)
		{
			int i,a,b,c=0;
			stack<int> s;
			queue<int> q;
			priority_queue<int> pq;

			// vector<int> res,sres,qres,pqres;
			// vector<int>::iterator it;

			int fs=1,fq=1,fpq=1,k=3,flag=1;
			for(i=0;i<n;i++)
			{
				scanf("%d%d",&a,&b);
				if(a)
				{
					s.push(b);
					q.push(b);
					pq.push(b);
				}
				
				else{	
				// res.push_back(b);

				if(flag){	
				if(fs)
				{
					if(!s.empty() && s.top()!=b){
					k--;
					fs=0;}
					else
						{
							if(!s.empty()) s.pop();
							else
								flag=0;
						}	
				}

				if(fq)
				{
					if(!q.empty() && q.front()!=b){
					k--;
					fq=0;}
					else
						{
							if(!q.empty())q.pop();
							else flag=0;
						}	
				}
				if(fpq )
				{
					if(!pq.empty() && pq.top()!=b){
					k--;
					fpq=0;}
					else
						{
							if(!pq.empty())pq.pop();
							else flag=0;
						}	
				}

			}


				}
			}
			
			if(!flag || !k)
			{
				printf("impossible\n");
			}
			else if(k>1)
			{
				printf("not sure\n");
			}
			else
			{
				if(fs)
				{
					printf("stack\n");
				}
				else if(fq)
					printf("queue\n");
				else 
					printf("priority queue\n");	
			}

		}
		return 0;
	}