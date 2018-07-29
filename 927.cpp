#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			long long int degree;
			cin>>degree;
			long long int coeff[degree+1],d,k,i,j;
			for(i=0;i<degree+1;i++)
				cin>>coeff[i];
			cin>>d>>k;
			i=1;
			long long int res;
			while(1)
			{
				// cout<<"i = "<<i<<endl;
				res = i*(i+1)*d/2;
				// cout<<"res = "<<res<<endl;
				if(res<k)
					i++;
				else 
					break;
			}
			long long int val=0;
			for(j=0;j<degree+1;j++)
			{
				// cout<<"value added = "<<coeff[j]*(pow(i,j))<<endl;
				val += coeff[j]*(pow(i,j));
			}
			cout<<val<<endl;

		}
		return 0;
	}