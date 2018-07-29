#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int s,b;
		while(cin>>s>>b && (s||b))
		{
			int l,r,i;
			int left[s+5],right[s+5];
			for(i=1;i<=s;i++)
			{
				left[i] = i-1;
				right[i] = i+1;
			}
			left[1] = -1;
			right[s] = -1;
			//right[s+1] = -1;

			for(i=0;i<b;i++)
			{
				cin>>l>>r;
				left[right[r]] = left[l];
				if(left[l]!=-1)
					cout<<left[l]<<" ";
				else cout<<"* ";
				right[left[l]] = right[r];
				if(right[r]!=-1)
					cout<<right[r]<<endl;
				else
					cout<<"*"<<endl;
			}
		cout<<"-"<<endl;	
		}
	}