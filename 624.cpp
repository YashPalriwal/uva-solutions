#include<bits/stdc++.h>
using namespace std;
int sum,n;
int res=0,flag=1;
vector<int> elements;

void print(int sol[],int a[])
	{
		int i;
		for(i=0;i<n;i++)
		{
			if(sol[i])
				cout<<a[i]<<" ";
		}
		cout<<"sum:"<<res<<endl;
	}

void subsetSum(int a[],int sol[],int psum,int index)
	{
		if(psum==sum)
		{
			flag = 0;
			print(sol,a);
		}

		else if(index<n && flag)
		{
			if(psum+a[index]<=sum)
			{
				sol[index] = 1;
				if(psum+a[index]>res)
					{
						res = psum+a[index];
						elements.clear();
						for(int i=0;i<n;i++)
						{
							if(sol[i])
								elements.push_back(a[i]);
						}	
					}
				subsetSum(a,sol,psum+a[index],index+1);		
			}
			sol[index] = 0;
			subsetSum(a,sol,psum,index+1);
		}
	}

int main()
	{
		
		while(cin>>sum>>n)
		{
			int i,a[n],sol[n];
			for(i=0;i<n;i++)
				{
					cin>>a[i];
					sol[i] = 0;
				}
			subsetSum(a,sol,0,0);
			if(flag)
				{
					n = elements.size();
					for(i=0;i<n;i++)
						cout<<elements[i]<<" ";
					cout<<"sum:"<<res<<endl;
				}
			flag=1;
			res=0;				
		}
		return 0;
	}