#include<bits/stdc++.h>
using namespace std;
int c=1;

int number(int n)
	{
		//cout<<n<<" ";
		if(n==1) return c;
		else if(n%2==0) {c++;return number(n/2);}
		else {c++;return number(3*n+1);} 
	}

int main()
	{
		int m,n;
		while(cin>>m>>n)
		{
			int i,j,max_val=0;
			int M,N;
			M = min(m,n);
			N = max(m,n);
			for(i=M;i<=N;i++)
			{
				j = number(i);
				c=1;
				if(j>max_val) max_val=j;
			}
			cout<<m<<" "<<n<<" "<<max_val<<endl;
		}
		return 0;
	}