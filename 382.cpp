#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,x=1;
		while(cin>>n && n)
		{
			if(x==1)
				cout<<"PERFECTION OUTPUT"<<endl;
			x++;
			if(n<10)
				cout<<"    ";
			else if(n>=10 && n<=99)
				cout<<"   ";
			else if(n>=100 && n<=999)
				cout<<"  ";
			else if(n>=1000 && n<=9999)
				cout<<" ";

			int val=1,i;
			for(i=2;i<=n/2;i++)
			{
				if(!(n%i))
					val += i;
			}

			cout<<n<<"  ";
			if(n==1)
				cout<<"DEFICIENT"<<endl;
			else if(val==n)
				cout<<"PERFECT"<<endl;
			else if(val>n)
				cout<<"ABUNDANT"<<endl;
			else 
				cout<<"DEFICIENT"<<endl;

		}
		cout<<"END OF OUTPUT"<<endl;
		return 0;
	}