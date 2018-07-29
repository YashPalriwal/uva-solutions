#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int a[5][5],i,j;
			int n[75],flag=0;
			int r[5]={0},d=0,c[5]={0};
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i!=2 && j!=2) cin>>a[i][j];
				}
			}
			a[2][2] = 0;
			for(i=0;i<75;i++)
				{cin>>n[i];}

			for(i=0;i<75;i++)
			{
				if(d==5) break;
				if(i>=5){
					for(j=0;j<5;j++)
					{
					if(r[i]==5 || c[i]==5) {flag = 1;break;}
					}
					if(flag==1) break;
				}
				
				if(n[i]<=15)
				{
					for(j=0;j<5;j++)
					{
						if(a[j][0]==n[i]) 
						{
							c[0]++;
							r[j]++;
							if(j==0) d++;
							break;
						}
					}
				}
				else if(n[i]>15 && n[i]<=30)
				{
					for(j=0;j<5;j++)
					{
						if(a[j][1]==n[i]) 
						{
							c[1]++;
							r[j]++;
							if(j==1) d++;
							break;
						}
					}
				}
				else if(n[i]>30 && n[i]<=45)
				{
					for(j=0;j<5;j++)
					{
						if(a[j][2]==n[i]) 
						{
							c[2]++;
							r[j]++;
							//if(j==1) d++;
							break;
						}
						else 
						{
							a[2][2] = n[i];
							c[2]++;
							r[2]++;
							d++;
						}
					}
				}
				else if(n[i]>45 && n[i]<=60)
				{
					for(j=0;j<5;j++)
					{
						if(a[j][3]==n[i]) 
						{
							c[3]++;
							r[j]++;
							if(j==3) d++;
							break;
						}
					}
				}
				else if(n[i]>60 && n[i]<=75)
				{
					for(j=0;j<5;j++)
					{
						if(a[j][4]==n[i]) 
						{
							c[4]++;
							r[j]++;
							if(j==4) d++;
							break;
						}
					}
				}
			}

			cout<<"BINGO after "<<i<<" numbers announced"<<endl;
		}
		return 0;
	}