#include<bits/stdc++.h>
using namespace std;

int main()
	{
		vector<int> v;
		int n;
		int j,i=0,sum;
		while(cin>>n)
		{
			i++;
			v.push_back(n);
			if(i%2!=0)
			{
				nth_element(v.begin(),v.begin()+i/2,v.end());
				// for(j=0;j<i;j++)
				// 	cout<<v[j]<<" ";
				// cout<<endl;
				cout<<v[i/2]<<endl;
			}
			else
			{
				nth_element(v.begin(),v.begin()+i/2,v.end());
				sum = v[i/2];
				nth_element(v.begin(),v.begin()+i/2-1,v.end());
				sum += v[i/2-1];
				cout<<sum/2<<endl;
			}

		}
		return 0;
	}