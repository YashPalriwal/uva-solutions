#include<bits/stdc++.h>
using namespace std;
int cou=0;
int t,n;	// for this ques, standard backtracking and branch and bound
			// both takes almost the same time to run

bool is_unique(int sol[],int index,int a[])
	{
		int i;
		for(i=0;i<index;i++)
		{
			if(!sol[i] && a[i]==a[index])
				return false;
		}
		return true;
	}
void print(int sol[],int a[])
	{
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(sol[i])
			{
				if(!k)
				{
					cout<<a[i];
				}
				else 
					cout<<"+"<<a[i];
				k++;	
			}
		}
		cout<<endl;
	}
void subsetSum(int a[],int sol[],int index,int psum,int bound)
	{
		if(psum==t)
		{
			cou++;
			print(sol,a);
		}
		else if(index<n)
		{
			if(psum+a[index]<=t)
			{
				if(is_unique(sol,index,a))
					{
					sol[index] = 1;
					subsetSum(a,sol,index+1,psum+a[index],bound);
					}	
			}
			if(bound-a[index]>=t)
				{
				sol[index]=0;
				subsetSum(a,sol,index+1,psum,bound-a[index]);
				}
			sol[index] = 0;		
			
		}
	}

int main()
{
	while(cin>>t>>n && (t||n))
	{
		int i,a[n],sol[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sol[i] = 0;
			sum += a[i];
		}
		cout<<"Sums of "<<t<<":"<<endl;
		subsetSum(a,sol,0,0,sum);
		if(!cou)
			cout<<"NONE"<<endl;
		cou = 0;
	}
	return 0;
}	