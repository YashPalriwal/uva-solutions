#include<bits/stdc++.h>
using namespace std;

char A[1000][1000],a[1000][1000],b[1000][1000],c[1000][1000],d[1000][1000];

int main()
	{
		int N,n;
		while(cin>>N>>n && (N||n))
		{
			
			int i,j,zero=0,ninety=0,one_eighty=0,two_seventy=0;
			for(i=0;i<N;i++)
				cin>>A[i];
			for(i=0;i<n;i++)
				cin>>a[i];

			int k,c1=0,l,flag;

			for(i=0;i<N-n+1;i++)
			{
				for(j=0;j<N-n+1;j++)
				{
					for(k=0;k<n;k++)
					{
						flag=1;
						for(l=0;l<n;l++)
						{
							if(A[i+k][j+l]==a[k][l])
								c1++;
							else 
							{
								c1=0;
								flag=0;
							}
							if(flag==0) break;
						}
						if(c1==(n*n)){c1=0;zero++;}
						if(flag==0) break;
					}
				}
			}
			cout<<zero<<" ";

			for(i=0;i<n;i++)				/*Function to rotate array by 90 degrees*/
			{
				for(j=0;j<n;j++)
				{
					b[j][n-1-i] = a[i][j];
					// swap(a[i][j],a[j][n-1-i]);		//Rotated by ninety degrees
				}
			}

			// cout<<"After rotating ninety degrees:\n";
			// for(i=0;i<n;i++)
			// 	{
			// 		for(j=0;j<n;j++)
			// 			cout<<b[i][j];
			// 		cout<<endl;
			// 	}	


			c1=0;

			for(i=0;i<N-n+1;i++)
			{
				for(j=0;j<N-n+1;j++)
				{
					for(k=0;k<n;k++)
					{
						flag=1;
						for(l=0;l<n;l++)
						{
							if(A[i+k][j+l]==b[k][l])
								c1++;
							else 
							{
								c1=0;
								flag=0;
							}
							if(flag==0) break;
						}
						if(c1==(n*n)){c1=0;ninety++;}
						if(flag==0) break;
					}
				}
			}
			cout<<ninety<<" ";	

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					c[j][n-1-i] = b[i][j];
					// swap(a[i][j],a[j][n-1-i]);		//Rotated by 180 degrees 
				}
			}

			// cout<<"After rotating ninety degrees:\n";
			// for(i=0;i<n;i++)
			// 	{
			// 		for(j=0;j<n;j++)
			// 			cout<<c[i][j];
			// 		cout<<endl;
			// 	}

			c1=0;
			for(i=0;i<N-n+1;i++)
			{
				for(j=0;j<N-n+1;j++)
				{
					for(k=0;k<n;k++)
					{
						flag=1;
						for(l=0;l<n;l++)
						{
							if(A[i+k][j+l]==c[k][l])
								c1++;
							else 
							{
								c1=0;
								flag=0;
							}
							if(flag==0) break;
						}
						if(c1==(n*n)){c1=0;one_eighty++;}
						if(flag==0) break;
					}
				}
			}
			cout<<one_eighty<<" ";

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					d[j][n-1-i] = c[i][j];
					// swap(a[i][j],a[j][n-1-i]);		//Rotated by 270 degrees
				}
			}

			// cout<<"After rotating ninety degrees:\n";
			// for(i=0;i<n;i++)
			// 	{
			// 		for(j=0;j<n;j++)
			// 			cout<<d[i][j];
			// 		cout<<endl;
			// 	}

			c1=0;
			
			for(i=0;i<N-n+1;i++)
			{
				for(j=0;j<N-n+1;j++)
				{
					for(k=0;k<n;k++)
					{
						flag=1;
						for(l=0;l<n;l++)
						{
							if(A[i+k][j+l]==d[k][l])
								c1++;
							else 
							{
								c1=0;
								flag=0;
							}
							if(flag==0) break;
						}
						if(c1==(n*n)){c1=0;two_seventy++;}
						if(flag==0) break;
					}
				}
			}
			cout<<two_seventy<<endl;
			// for(i=0;i<N;i++)
			// 	free(A[i]);	
			// free(A);
			// for(i=0;i<n;i++)
			// {
			// free(a[i]);
			// free(b[i]);
			// free(d[i]);
			// free(c[i]);
			// }
			// free(a);
			// free(b);
			// free(c);
			// free(d);	 
		}
		return 0;
	}