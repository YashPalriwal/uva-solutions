#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n && n)
			{
				int i,a[n],j;
				vector<int> ar;
				for(i=0;i<n;i++)
				{
					cin>>a[i];
					if(a[i]>0)
						ar.push_back(a[i]);
				}
				j = ar.size();
				if(!j)
					cout<<"0"<<endl;
				else
				{
					for(i=0;i<j;i++)
					{
						if(i==j-1)
							cout<<ar[i]<<endl;
						else
							cout<<ar[i]<<" ";
					}
				}
			}
			return 0;
	}