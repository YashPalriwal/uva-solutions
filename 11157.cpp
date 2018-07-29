#include<bits/stdc++.h>
using namespace std;

int main()
	{
		 int TC,x=1;
		 cin>>TC;
		 while(TC--)
		 {
		 	long long int n,d,i,a,flag=0;
		 	cin>>n>>d;
		 	set<long long int > b,s;
		 	set<long long int>::iterator bit,sit,it;
		 	char c,c1;
		 	// b.insert(0);
		 	for(i=0;i<n;i++)
		 	{
		 		cin>>c>>c1>>a;
		 		if(c=='B') 
		 			b.insert(a);
		 		else
		 			s.insert(a);
		 	}
		 	b.insert(d);
		 	long long int pos_value=0,max=0;
		 	char pos = 'B';
		 	bit = b.begin();
		 	sit = s.begin();
		 	while(bit != b.end())
		 	{
		 		// cout<<"pos = "<<pos<<endl;
		 		// cout<<"big rock = "<<*bit<<endl;
		 		// if(sit!=s.end()) cout<<"small rock = "<<*sit<<endl;
		 		if(pos=='B')
		 		{
		 			flag=0;
		 			if(sit==s.end())
		 				{
		 					// it = bit;
		 					
		 					if(*bit-pos_value>max)
		 						max = *bit- pos_value;
		 					pos_value = *bit;
		 					++bit;
		 				}	
		 			else if(*bit < *sit)
		 			{
		 				// it = bit;
		 				
		 				if(*bit- pos_value>max)
		 					max = *bit- pos_value;
		 				pos_value = *bit;
		 				++bit;
		 			}
		 			else
		 			{
		 				pos = 'S';
		 				if(*sit-pos_value>max)
		 					max = *sit - pos_value;
		 				it = sit;
		 				++it;
		 				pos_value = *sit;
		 				// cout<<"val erased = "<<*sit<<endl;
		 				s.erase(sit);

		 				sit = it;
		 			}
		 		}
		 		else
		 		{
		 			if(sit==s.end())
		 			{
		 				// it = bit;
		 				
		 				if(*bit-pos_value>max)
		 					max = *bit- pos_value;
		 				pos_value = *bit;
		 				++bit;
		 				pos = 'B';
		 				flag=0;
		 			}
		 			else if(*bit < *sit)
		 			{
		 				if(*bit- pos_value > max)
		 					max = *bit- pos_value;
		 				pos_value = *bit;
		 				++bit;
		 				pos = 'B';
		 				flag=0;
		 			}
		 			else 
		 			{
		 				if(!flag)
		 					{
		 						++sit;
		 						flag=1;
		 						// cout<<"Small rock skipped"<<endl;
		 					}	
		 				else
		 				{
		 					it = sit;
		 					++it;
		 					if(*sit - pos_value>max)
		 						max = *sit - pos_value;
		 					pos_value = *sit;
		 					// cout<<"value erased = "<<*sit<<endl;
		 					s.erase(sit);
		 					sit = it;
		 					flag=0;
		 				}
		 			}
		 		}
		 	}
			// cout<<"MAximal jump in 1st traversal = "<<max<<endl;
			// cout<<"Big 1 -> ";
			// for(it=b.begin();it!=b.end();it++)
			// 	cout<<*it<<" ";
			// 	cout<<endl;	

			long long int max1=0;
			for(it=s.begin();it!=s.end();it++)
			{
				b.insert(*it);
			}


			b.insert(0);
			// cout<<"Big 2 -> ";
			// for(it=b.begin();it!=b.end();it++)
			// 	cout<<*it<<" ";
			// cout<<endl;	
			it = b.begin();
			bit = it;
			++bit;
			while(1)
			{
				if(bit==b.end())
					break;
				else
				{
					if(*bit- *it>max1)
					{
						
						if(*bit-*it>max1)
							max1 = *bit -*it;
						// cout<<"it = "<<*it<<"	bit = "<<*bit<<endl;
						// cout<<"max1 = "<<max1<<endl;
						 // ++bit;
						// ++it;
					}
					++bit;
					++it;
				}
			}
			if(max>=max1)
				cout<<"Case "<<x<<": "<<max<<endl;
			else
				cout<<"Case "<<x<<": "<<max1<<endl;
		 	x++;
		 }
		 return 0;
	}