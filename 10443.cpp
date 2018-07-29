#include<bits/stdc++.h>
using namespace std;

void change(char **a,int **temp,int r,int c)
	{
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(temp[i][j]==1)
				{
					if(a[i][j]=='R') a[i][j] = 'P';
					else if(a[i][j]=='S') a[i][j] = 'R';
					else a[i][j] = 'S';
				}
			}
		}
		free(temp);
	}

void rps(char **a,int r,int c)
	{
		int i,j;
		int **temp;
		temp = (int**)calloc(r,sizeof(int*));
	  	for (int i = 0; i < r; ++i)
	  	{
	  		temp[i] = (int*)calloc(c,sizeof(int));
	  	}
		

		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]=='R')
				{
					if(i+1<r && a[i+1][j]=='S') temp[i+1][j] = 1;
					if(j+1<c && a[i][j+1]=='S') temp[i][j+1] = 1;
					if(i-1>=0 && a[i-1][j]=='S') temp[i-1][j] = 1;
					if(j-1>=0 && a[i][j-1]=='S') temp[i][j-1] = 1;
				}
				else if(a[i][j]=='S')
				{
					if(i+1<r && a[i+1][j]=='P') temp[i+1][j] = 1;
					if(j+1<c && a[i][j+1]=='P') temp[i][j+1] = 1;
					if(i-1>=0 && a[i-1][j]=='P') temp[i-1][j] = 1;
					if(j-1>=0 && a[i][j-1]=='P') temp[i][j-1] = 1;
				}
				else if(a[i][j]=='P')
				{
					if(i+1<r && a[i+1][j]=='R') temp[i+1][j] = 1;
					if(j+1<c && a[i][j+1]=='R') temp[i][j+1] = 1;
					if(i-1>=0 && a[i-1][j]=='R') temp[i-1][j] = 1;
					if(j-1>=0 && a[i][j-1]=='R') temp[i][j-1] = 1;
				}
			}
		}

		change(a,temp,r,c);
		//free(temp);

	}

int main(int argc, char const *argv[])
{
	int TC,x=0;
	cin>>TC;
	while(TC--) 
	{
	  	int r,c,n,i,j;
	  	cin>>r>>c>>n;
	  	char **arr;
	  	arr = (char**)malloc(r*sizeof(char*));
	  	for ( i = 0; i < r; ++i)
	  	{
	  		arr[i] = (char*)malloc(c*sizeof(char));
	  	}
	  	//int change[r][c];
	  	for ( i = 0; i < r; ++i)
	  	{
	  		for ( j = 0; j < c; ++j)
	  		{
	  			cin>>arr[i][j];
	  			//change[i][j] = 0;
	  		}
	  	}

	  	for(i=0;i<n;i++)
	  	{
	  		rps(arr,r,c);
	  	}

	  	if(x==0)
	  	{
	  		for (int i = 0; i < r; ++i)
	  		{
	  			for (int j = 0; j < c; ++j)
	  			{
	  			cout<<arr[i][j];
	  			}
	  			cout<<endl;

	  		}
	  		//cout<<endl;
	  		x++;
	  	}

	  	else
	  	{
	  		cout<<endl;
	  		for (int i = 0; i < r; ++i)
	  		{
	  			for (int j = 0; j < c; ++j)
	  			{
	  			cout<<arr[i][j];
	  			}
	  			cout<<endl;

	  		}
	  	}

	}
	//cout<<"------------";
	return 0;
}