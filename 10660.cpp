#include<bits/stdc++.h>
using namespace std;
#define HIGH 999999999

int abso(int a,int b)
	{
		if(a>=b) return a-b;
		else return b-a;
	}

int dis(int a,int b,int c,int d,int e,int i,int j)
	{
		int val[5];
		int ai,aj,bi,bj,ci,cj,di,dj,ei,ej;
		ai = a/5;
		bi = b/5;
		ci = c/5;
		di = d/5;
		ei = e/5;
		aj = a%5;
		bj = b%5;
		cj = c%5;
		dj = d%5;
		ej = e%5;

		val[0] = abso(i,ai)+abso(j,aj);
		val[1] = abso(i,bi)+abso(j,bj);
		val[2] = abso(i,ci)+abso(j,cj);
		val[3] = abso(i,di)+abso(j,dj);
		val[4] = abso(i,ei)+abso(j,ej);
		sort(val,val+5);
		
		return val[0];
	}

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int n,i;
			vector<pair<pair<int,int>,int> > v;
			cin>>n;

			int a,b,c,d,e;
			for(i=0;i<n;i++)
			{
				cin>>a>>b>>c;
				v.push_back(make_pair(make_pair(a,b),c));
			}

			int min = HIGH,val;
			int arr[5];

			for(a=0;a<21;a++)
			{
				for(b=a+1;b<22;b++)
				{
					for(c=b+1;c<23;c++)
					{
						for(d=c+1;d<24;d++)
						{
							for(e=d+1;e<25;e++)
							{
								val=0;
								for(i=0;i<n;i++)
								{
									val += v[i].second*dis(a,b,c,d,e,v[i].first.first,v[i].first.second);
								}
								if(val<min)
								{
									// cout<<"Previous min = "<<min<<endl;

									min = val;
									// cout<<"Updated min = "<<min<<endl;
									// cout<<"Previous offices --> ";
									// cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
									arr[0] = a;
									arr[1] = b;
									arr[2] = c;
									arr[3] = d;
									arr[4] = e;
									// cout<<"New offices --> ";
									// cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
								}
							}
						}
					}
				}
			}

			for(i=0;i<5;i++)
			{
				if(i!=4)
					cout<<arr[i]<<" ";
				else 
					cout<<arr[i]<<endl;
			}
			
		}
		return 0;
	}