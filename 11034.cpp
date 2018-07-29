#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int TC;
		cin>>TC;
		while(TC--)
		{
			int l,m,i;
			cin>>l>>m;
			l = l*100;
			queue<int> left,right;
			int a;
			string s;
			for(i=0;i<m;i++)
			{
				cin>>a>>s;
				if(s=="left")
					left.push(a);				
				else
					right.push(a);
			}
		 
		 int res=0,size=0,flag=0;
		 string pos = "left";

		 while(!left.empty() || !right.empty())
		 {
		 	size=0;
		 	flag=0;
		 	if(pos=="left")
		 	{
		 		if(left.empty())
		 		{
		 			pos = "right";
		 			res++;
		 			flag=1;
		 		}
		 		while(size+left.front()<=l && !left.empty())
		 		{
		 			size += left.front();
		 			// cout<<"Updated size = "<<size<<endl;
		 			left.pop();
		 		}
		 		pos = "right";
		 		if(!flag)res++;
		 		// cout<<"Updated res = "<<res<<endl;

		 	}

		 	else
		 	{
		 		if(right.empty())
		 		{
		 			pos = "left";
		 			res++;
		 			flag=1;
		 		}
		 		while(size+right.front()<=l && !right.empty())
		 		{
		 			size += right.front();
		 			right.pop();
		 			// cout<<"Updated size = "<<size<<endl;
		 		}
		 		pos = "left";
		 		// cout<<"Updated res = "<<res<<endl;
		 		if(!flag)res++;
		 	}
		 }
		 cout<<res<<endl;
		}
		return 0;
	}