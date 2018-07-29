#include<bits/stdc++.h>
using namespace std;
// #define eps 0.000000000000000001

// double mod(double a ,double b)
// 	{
// 		if(a>=b) return a-b;
// 		else return b-a;
// 	}

int main()
	{
		double k;
		while(cin>>k)
		{
			vector<pair<long long int,long long int> > v;
			long long int i,j,n=0;//m,flag=0,n=0;
			double value;
			for(i=k+1;;i++)
			{	
				value = k*i/(i-k);
				if(value<i)
					break;
				else if(value == ceil(value))
				{
					n++;
					v.push_back(make_pair(value,i));
					
				}
			}
			cout<<n<<endl;

			for(i=0;i<n;i++)
			{
				cout<<"1/"<<k<<" = 1/"<<v[i].first<<" + 1/"<<v[i].second<<endl;
			}

		}
		return 0;
	}