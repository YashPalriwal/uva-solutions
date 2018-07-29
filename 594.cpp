#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		while(cin>>n)
		{
			int x[4],temp=n;
			x[0] = (1<<8)-1;	//mask having 11111111
			x[0] = (x[0]&n);	//x[0] stores the first 8 bits of n;
			n = n>>8;			//removing the 1st 8 bits
			x[0] = x[0]<<8;	//1st byte now at 2nd position && 1st byte is 00000000;
			x[1] = (1<<8)-1;
			x[1] = (x[1]&n);	//x[1] stores the second 8 bits of n
			x[0] = x[0]^x[1];	//x[0]'s first 8 bits now store 2nd byte 
			x[0] = x[0]<<8;		//1st byte now at 3rd position
			n = n>>8;			//16 bits removed from n
			x[2] = (1<<8)-1;	//mask having 8 1's
			x[2] = (x[2]&n);	//x[2] stores the 3rd byte of n
			x[0] = x[0]^x[2];	//x[0] has 3 bytes stored of n 
			x[0] = x[0]<<8;		//shifted 8 more bits
			n = n>>8;
			x[3] = (1<<8)-1;
			x[3] = (x[3]&n);
			x[0] = x[0]^x[3];

			cout<<temp<<" converts to "<<x[0]<<endl;

		}
		return 0;
	}