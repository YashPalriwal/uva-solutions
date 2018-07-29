#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int n,val;
		while(cin>>n>>val && (n||val))
		{
			long long int centre = (n/2)+1;

			// cout<<"Centre = "<<centre<<endl;

			if(val==1) cout<<"Line = "<<centre<<", column = "<<centre<<".\n";

			else{
			long long int i,temp=1,temp1;
			while(1)
			{
				if(val<=(temp*temp)) break;
				else temp = temp+2;
			}
			//temp = temp+2;
			//int nbd = temp;
			// cout<<"Temp = "<<temp<<endl;
			long long int mod ;//= ((temp*temp)-val)/temp;
			// cout<<"Mod = "<<mod<<endl;
			long long int row,col;

			//cout<<nbd<<" "<<mod<<endl;

			long long int zero[temp],one[temp],two[temp],three[temp],j;

			temp1 = temp*temp;
			for(j=0;j<temp;j++)
				{
					zero[j] = temp1;
					if(val==zero[j]) mod=0;
					temp1--;
				}
			temp1++;	
			for(j=0;j<temp;j++)
				{
					one[j] = temp1;
					if(val==one[j]) mod=1;
					temp1--;
				}
			temp1++;
			for(j=0;j<temp;j++)
				{
					two[j] = temp1;
					if(val==two[j]) mod = 2;
					temp1--;
				}
			temp1++;
			for(j=0;j<temp;j++)
				{
					three[j] = temp1;
					if(val==three[j]) mod = 3;
					temp1--;
				}


			if(mod==0)
			{
				col = centre+(temp/2);
			}
			else if(mod==1)
			{
				row = centre-(temp/2);
			}
			else if(mod==2)
			{
				col = centre-(temp/2);
			}
			else
			{
				row = centre+(temp/2);
			}
	



			if(mod==0)
			{
				for(i=0;i<temp;i++)
				{
					if(zero[i]==val) break;
				}

				row = centre + (temp/2)-i;
			}
			else if(mod==1)
			{
				for(i=0;i<temp;i++)
				{
					if(one[i]==val) break;
				}
				col = centre + (temp/2) - i;
			}
			else if(mod==2)
			{
				for(i=0;i<temp;i++)
				{
					if(two[i]==val) break;
				}
				row = centre + i -(temp/2);
			}
			else if(mod==3)
			{
				for(i=0;i<temp;i++)
				{
					if(three[i]==val) break;
				}
				col = centre + i - (temp/2);
			}

			cout<<"Line = "<<row<<", column = "<<col<<".\n";
		}
		}
		return 0;
	}