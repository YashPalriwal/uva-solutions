#include<bits/stdc++.h>
using namespace std;
int m,n;
int start[2],end[2];
int flag=1;
int cou=0;
void domino(int sol[],int index,int a[][2],int face,bool valid[])
	{
		if(index==n && (face==end[0] || face==end[1]))
		{
			cou++;
			// cout<<"YES"<<endl;
			flag=0;
		}
		else if(flag && index<m)
		{
			int i;
			for(i=0;i<m;i++)
			{
				if(valid[i] && (a[i][0]==face || a[i][1]==face))
				{
					valid[i] = false;
					sol[index] = i;
					if(a[i][0]==face)
					{
						face = a[i][1];
						domino(sol,index+1,a,face,valid);
						sol[index] = -1;
						valid[i] = true;
					}
					else
					{
						face  = a[i][0];
						domino(sol,index+1,a,face,valid);
						sol[index] = -1;
						valid[i] = true;
					}
					
				}
			}

			// valid[sol[index]] = true;
			// sol[index] = -1;
			
			if(index>0)
				{
					valid[sol[index-1]] = true;
					sol[index-1] = -1;
				}

		}

	}


int main()
	{
		while(cin>>n>>m && n)
		{
			cin>>start[0]>>start[1]>>end[0]>>end[1];
			int a[m][2],i,j,sol[n];
			for(i=0;i<m;i++)
			{
				for(j=0;j<2;j++)
					cin>>a[i][j];
			}
			for(i=0;i<n;i++)
			{
				sol[i] = -1;
			}
			bool valid[m];
			for(i=0;i<m;i++)
				valid[i] = true;
			// sol[0][0] = start[0];
			// sol[0][1] = start[1];
			domino(sol,0,a,start[1],valid);
			if(cou)
				cout<<"YES"<<endl;
			else
				{
					domino(sol,0,a,start[0],valid);
				
					if(cou)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
					// cout<<"NO"<<endl;
				}
			flag=1;	
			cou = 0;		
		}
		return 0;
	}	