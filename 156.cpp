#include<bits/stdc++.h>
using namespace std;

int main()
	{
		string s1;
		vector<string> v;
		while(cin>>s1)
		{
			if(s1=="#") break;
			v.push_back(s1);
		}

		vector<string> s,temp;
		vector<int> index;
		int i,n = v.size();

		// cout<<"Vector of string : ";
		// for(i=0;i<n;i++)
		// 	cout<<v[i]<<" ";
		// cout<<endl;
		for(i=0;i<n;i++)
		{
			s1 = v[i];
			transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
			sort(s1.begin(),s1.end());
			s.push_back(s1);
		}

		// cout<<"Vector of sorted key string : ";
		// for(i=0;i<n;i++)
		// 	cout<<s[i]<<" ";
		// cout<<endl;

		int j,flag;
		for(i=0;i<n;i++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				// cout<<"s[i] = "<<s[i]<<"  , ";
				// cout<<"s[j] = "<<s[j]<<endl;
				if(i!=j && s[i]==s[j])
					{
						flag = 1;
						break;
					}	
			}
			if(!flag)
				{
					index.push_back(i);
					// cout<<"Index pushed = "<<i<<endl;
				}	
		}
		int m = index.size();
		// cout<<"m = "<<m<<endl;
		// cout<<"Index Vector --> ";
		// for(i=0;i<m;i++)
		// 	cout<<index[i]<<" ";
		// cout<<endl;

		for(i=0;i<m;i++)
		{
			temp.push_back(v[index[i]]);
		}

		// cout<<"result vector unsorted :"<<endl;
		// for(i=0;i<m;i++)
		// 	cout<<temp[i]<<endl;

		sort(temp.begin(),temp.end());
		for(i=0;i<m;i++)
		{
			cout<<temp[i]<<endl;
		}
		return 0;
	}