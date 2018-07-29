#include<bits/stdc++.h>
using namespace std;

#define M 8

int main()
	{
		bitset<8> b1;
		bitset<8> b2(73);
		bitset<8> b3(string("1010110"));

		cout<<"b1 = "<<b1<<endl;
		cout<<"b2 = "<<b2<<endl;
		cout<<"b3 = "<<b3<<endl;
		cout<<"b1==b2 --> "<<(b1==b2)<<endl;
		int i;
		for(i=7;i>=0;i--)
		{
			if(b2.test(i))
				b1[i] = 1;
		}
		cout<<"B1 = "<<b1<<endl;
		b1.set();
		cout<<b1<<endl;
		for(i=7;i>=0;i--)
		{
			if(i%2)
				b1.flip(i);
		}
		cout<<b1<<endl;
		cout<<b1[0]<<b1[1]<<endl;
	}