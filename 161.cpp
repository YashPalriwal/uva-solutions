#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int a,b,c;
		while(cin>>a>>b && (a&&b))
		{
			vector<int> v;
			v.push_back(a);
			v.push_back(b);
			int i;
			while(cin>>c && c)
			{
				v.push_back(c);
			}
			int a[18001] = {0},j;
			sort(v.begin(),v.end());
			int mini = 2*v[0];
			//a[v[0]-5]++;
			int n = v.size(),x,m=0;

				// cout<<"Vector --> ";
				// for(i=0;i<n;i++)
				// 	cout<<v[i]<<" ";
				// cout<<endl;

			for(i=0;i<n;i++)
			{
				x = v[i];
				m = 0;
				for(j=mini;j<18001;j++)
				{
					if(j>=m*x && j<(m*x)+(x-5))
					{
						//cout<<"Value pushed = "<<j<<endl;
						a[j]++;
					}
					else
					{
						// cout<<"Increasing j to ";
						m += 2;
						j = m*x-1;
						// cout<<j<<endl;
					}
				}
			}
			int ans,flag=0;

			for(i=mini;i<18001;i++)
			{
				if(a[i]==n)
					{
						ans = i;
						// cout<<ans<<endl;
						flag=1;
						break;
					}	
			}

			int hour,min,sec;

			if(!flag)
			{
				cout<<"Signals fail to synchronise in 5 hours"<<endl;
			}
			else
			{
				hour = ans/3600;
				ans = ans%3600;
				min = ans/60;
				// ans = ans/60;
				
				sec = ans%60;
				


				// cout<<hour<<":"<<min<<":"<<sec<<endl;
				cout<<"0"<<hour<<":";
				if(min<10)
				{
					cout<<"0"<<min<<":";
				}
				else
					cout<<min<<":";
				if(sec<10)
					cout<<"0"<<sec<<endl;
				else
					cout<<sec<<endl;
			}



		}
		return 0;
	}