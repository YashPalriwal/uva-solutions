#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int front,rear;
		while(cin>>front>>rear && (front||rear))
		{
			double f[front],r[rear];
			int i,j;
			for(i=0;i<front;i++)
				cin>>f[i];
			for(i=0;i<rear;i++)
				cin>>r[i];
			vector<double> dr;
			for(i=0;i<front;i++)
			{
				for(j=0;j<rear;j++)
				{
					dr.push_back(r[j]/f[i]);
				}
			}
			int n = dr.size();
			// cout<<"Unsorted drive ratio vector :"<<endl;
			// for(i=0;i<n;i++)
			// 	cout<<dr[i]<<" ";
			// cout<<endl;
			sort(dr.begin(),dr.end());
			// cout<<"Sorted drive ratio vector :"<<endl;
			// for(i=0;i<n;i++)
			// 	cout<<dr[i]<<" ";
			// cout<<endl;
			double max_spread = 0;
			
			for(i=1;i<n;i++)
			{
				// cout<<"Current spread = "<<(dr[i]/dr[i-1])<<endl;
				if(max_spread<(dr[i]/dr[i-1]))
					{
						max_spread = dr[i]/dr[i-1];
						// cout<<"Updated max spread = "<<max_spread<<endl;
					}	
			}
			printf("%.2f\n",max_spread);
		}
	}