#include<bits/stdc++.h>
using namespace std;

int main()
{
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n,t;
		cin>>n>>t;
		int m,i;
		queue<pair<int,int> > left,right;
		cin>>m;
		int res[m+5];
		// queue<pair<int,string> >::iterator it;
		
		int a,temp=m;
		string s;
		string pos="left";
		int time =0;

		for(i=0;i<m;i++)
		{
			cin>>a>>s;
			if(s=="left")
				left.push(make_pair(a,i));
			else
				right.push(make_pair(a,i));
		}

		// if(left.front().first<=right.front().first)
		// 	time = left.front().first;
		// else
		// {
		// 	time = right.front().first + t;
		// 	pos = "right";
		// }

		int flag=0,dir=0;
		while(m)
		{
			flag=0;
			dir = 0;

			// cout<<"m = "<<m<<endl;
			// cout<<"Current position --> "<<pos<<endl;
			// cout<<"current time --> "<<time<<endl;
			if(pos=="left")
			{
				if(!left.empty() && !right.empty() && right.front().first<left.front().first && left.front().first>time )
				{
					time = max(time+t,right.front().first+t);
					pos = "right";
					dir = 1;
				}

				else if(left.front().first<=right.front().first && !right.empty() && left.front().first>time && !left.empty())
					time = left.front().first;

				else if(left.empty())
				{
					if(right.front().first>time)
					{
						time = t + right.front().first;
					}
					else
						time += t;
					pos = "right";
					dir = 1;
				}

				else if(right.empty())
				{
					time = max(time,left.front().first);

				}


				if(!dir)
					{
						for(i=0;i<n;i++)
						{
							// cout<<"i = "<<i<<endl;
							if(left.front().first<=time && !left.empty()) 
							{
								// cout<<time+t<<endl;
								res[left.front().second] = time+t;
								// cout<<res[left.front().second]<<endl;
								left.pop();
								m--;
							}
							else
							{
								flag = 1;
								time += t;
								pos = "right";
								break;
							}
						}
						if(!flag){
						time += t;
						pos = "right";
					}
					}
			}

			else
			{
				if(!left.empty() && !right.empty() && left.front().first<right.front().first && right.front().first>time)
				{
					time = max(time+t,left.front().first+t);
					pos = "left";
					dir = 1;
				}

				else if(right.empty())
				{
					if(left.front().first>time)
					{
						time = t + left.front().first;
					}
					else
						time += t;
					pos = "left";
					dir = 1;
				}

				else if(!right.empty() && !left.empty() && right.front().first<=left.front().first && right.front().first>time)
					time = right.front().first;

				else if(left.empty())
				{
					time = max(time,right.front().first);
				}

				if(!dir)
				{
					for(i=0;i<n;i++)
					{
						// cout<<"i = "<<i<<endl;
						if(right.front().first<=time && !right.empty())
						{
							res[right.front().second] = time+t;
							// cout<<res[right.front().second]<<endl;
							// cout<<time+t<<endl;
							right.pop();
							m--;
						}
						else
						{
							flag= 1;
							time += t;
							pos = "left";
							break;
						}

					}
					if(!flag){
					time += t;
					pos = "left";
				}
				}
			}
		}
		for(i=0;i<temp;i++)
			cout<<res[i]<<endl;
		if(TC)cout<<endl;
		
	}
	return 0;
}