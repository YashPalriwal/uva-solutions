#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int i,j,k,flag=0;
		double a[4];
		double sum,p,x;
		vector< pair< pair<double,double>,pair<double,double> > > v;  
		for(i=1;i<=2000;i++)
		{
			if(flag==1)
				flag=0;
			for(j=1;j<=2000;j++)
			{
				if(flag==1)
					break;
				for(k=1;k<=2000;k++)
				{

					// cout<<"i="<<i<<" j="<<j<<" k="<<k<<endl;

					sum = (i+j+k)/100.0;
					p = (i*j*k)/1000000.0;

					

					if(p>1)
						{
							x = sum/(p-1);
							
							x = x*100;
							if(x==ceil(x) && x>=1 && (sum+x/100)<=20 )
							{
								// cout<<i<<" "<<j<<" "<<k<<" "<<x<<endl;
								a[0] = i/100.0;
								a[1] = j/100.0;
								a[2] = k/100.0;
								a[3] = x/100.0;
								sort(a,a+4);
								// printf("%.2f %.2f %.2f %.2f\n",a[0],a[1],a[2],a[3]);
								v.push_back(make_pair(make_pair(a[0],a[1]),make_pair(a[2],a[3])));
							}
						}
					else
					{
						flag=1;
						break;
					}		

				}
			}
		}

		sort(v.begin(),v.end());
		int m = v.size();
		for(i=0;i<m;i++)
			cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
		return 0;
	}