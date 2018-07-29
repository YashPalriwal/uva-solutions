#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,x=0;
		while(cin>>n && n)
		{
			int a[n],i,i1,i2,i3,i4,i5,i6;
			for(i=0;i<n;i++)
				cin>>a[i];
			if(x!=0) cout<<endl;
			for(i1=0;i1<n-5;i1++)
			{
				for(i2=i1+1;i2<n-4;i2++)
				{
					for(i3=i2+1;i3<n-3;i3++)
					{
						for(i4=i3+1;i4<n-2;i4++)
						{
							for(i5=i4+1;i5<n-1;i5++)
							{
								for(i6=i5+1;i6<n;i6++)
								{
									cout<<a[i1]<<" "<<a[i2]<<" "<<a[i3]<<" "<<a[i4]<<" "<<a[i5]<<" "<<a[i6]<<endl;
								}
							}
						}
					}
				}
			}
			x++;
		}
		return 0;

	}