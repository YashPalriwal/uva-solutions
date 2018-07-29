#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n)
		{
			if(n==0) return 0;
			double a[n],sum=0,pos=0,neg=0,avg;
			int i;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			avg = sum/n;
			//sum = 0;
			for(i=0;i<n;i++)
			{
				cout<<a[i]-avg<<endl;
				if(a[i]>=avg)pos += a[i]-avg;
				else neg+= avg-a[i];
			}
			cout<<sum<<" "<<avg<<" "<<pos<<" "<<neg<<endl;
			sum = max(neg,pos);
			printf("$%.2lf\n",sum);

		}
	}