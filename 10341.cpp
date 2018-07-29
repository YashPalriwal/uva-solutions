#include<bits/stdc++.h>
using namespace std;
#define eps 0.00000000001
#define e 	2.71828182846

int main()
	{
		double p,q,r,s,t,u;
		while(scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)==6)
		{
			double res,start=0,end=1,x;
			double resmax,resmin;

			resmax = p+r+u;
			resmin = p/e + q*sin(1) + r*cos(1) + s*tan(1) + t + u;

			if(resmax<0 || resmin>0)
				printf("No solution\n");
			else 
			{
				while(1)
				{
					x = (start+end)/2;
					res = p/exp(x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
					if(abs(res-0)<=eps)
					{
						break;
					}
					else if(res>0)
					{
						start = x+eps;
					}
					else if(res<0)
						end = x-eps;
				}
				printf("%.4lf\n",abs(x-0));
			}


		}
		return 0;
	}