#include<bits/stdc++.h>
using namespace std;
int n;
int flag=1;
int primes[11] = {2,3,5,7,11,13,17,19,23,29,31};

bool is_safe(int sol[],int index,int val)
{
	int i;
	for(i=0;i<index;i++)
		{
			if(sol[i]==val)
				return false;
		}
	return true;	
}

bool is_valid(int j,int i)
{
	if(binary_search(primes,primes+11,j+i))
		return true;
	return false;
}

void print(int sol[])
{
	for(int i=0;i<n;i++)
		{
			if(i!=n-1)cout<<sol[i]<<" ";
			else
				cout<<sol[i];
		}	
	cout<<endl;
}

void ring(int sol[],int index)
{
	if(index==n)
	{
		if(sol[0]==1)
		{
			print(sol);
		}
		else
			{
				// cout<<endl;
				flag=0;
			}	
	}
	else if(flag)
	{
		int i;
		for(i=2;i<=n;i++)
		{
			if(index==n-1)
			{
				if(is_valid(sol[index-1],i) && is_valid(sol[0],i))
				{
					if(is_safe(sol,index,i))
					{
						sol[index] = i;
						ring(sol,index+1);
						sol[index] = 0;
					}
				}
			}
			else if(is_valid(sol[index-1],i))
			{
				if(is_safe(sol,index,i))
				{
					sol[index] = i;
					ring(sol,index+1);
					sol[index] = 0;
				}
			}
		}
		sol[index] = 0; // not required as we just want to explore for 1st value
	}
}

int main()
	{
		int x=1;
		while(cin>>n)
		{
			int i,sol[n]	;
			for(i=0;i<n;i++)
				sol[i] = 0;
			sol[0] = 1;
			if(x>1) cout<<endl;
			cout<<"Case "<<x<<":"<<endl;
			ring(sol,1);
			// cout<<endl;
			flag=1;
			x++;
		}
		return 0;
	}