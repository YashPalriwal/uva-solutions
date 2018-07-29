#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int m,n;
		while(cin>>m>>n)
		{
			int a[m][n],i,j;
			int t[n][m];
			int r;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					a[i][j] = 0;
				}
			}
			int c;
			for(i=0;i<m;i++)
			{
				cin>>r;
				int b[r];
				for(j=0;j<r;j++)
				{
					cin>>b[j];
					b[j]--;
				}

				for(j=0;j<r;j++)
				{
					cin>>c;
					a[i][b[j]] = c;
				}

			}
			int row[n];
			for(i=0;i<n;i++)
				row[i] = 0;

			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					t[j][i] = a[i][j];
					if(t[j][i]!=0) 
						row[j]++;
				}
				
			}
			cout<<n<<" "<<m<<endl;
			int z=0;
			for(i=0;i<n;i++)
			{
				z=0;
				cout<<row[i];
				if(row[i]) cout<<" ";
				for(j=0;j<m;j++)
				{
					if(t[i][j]!=0)
						{
							z++;
							cout<<j+1;
							if(z<row[i]) cout<<" ";
						}	
				}
				cout<<endl;
				z=0;
				for(j=0;j<m;j++)
				{
					if(t[i][j]!=0)
					{	
						z++;
						cout<<t[i][j];
						if(z<row[i])cout<<" ";
					}

				}
				cout<<endl;
			}

		}
		return 0;
	}