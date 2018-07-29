#include<bits/stdc++.h>
using namespace std;

int is_leap(long long int year)
{
	if(year%400==0)
		return 1;
	else if(year%4==0 && year%100!=0)
		return 1;
	else return 0;
}

int countDivisibles(int A, int B, int M)
{
    // Add 1 explicitly as A is divisible by M
    if (A % M == 0)
        return (B / M) - (A / M) + 1;
 
    // A is not divisible by M
    return (B / M) - (A / M);
}

int main()
	{
		long long int notleap[13] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
		long long int leap[13] = {0,31,60,91,121,152,182,213,244,274,305,335,366};
		long long int n,d,m,y;
		while(cin>>n>>d>>m>>y && (n||d||m||y))
		{
			long long int val=0,start;
			int i;
			if(!is_leap(y))
				start = d+notleap[m-1];
			else
				start = d+leap[m-1];
			while(n>365)
			{
				if(!is_leap(y))
					n -= 365;
				else
				{
					val++;
					n -= 366;
				}
			}

			if(start>val)
			{
				start = start-val;
				if(!is_leap(y))
				{
					for(i=1;i<=12;i++)
					{
						if(notleap[i]>start)
						{
							m = i;
							d = start-notleap[i-1];
							break;
						}
					}
				}
				else
				{
					for(i=1;i<=12;i++)
					{
						if(leap[i]>start)
						{
							m = i;
							d = start-leap[i-1];
							break;
						}
					}
				}
			}

			else if(start==val)
			{
				m = 12;
				d = 31;
				y--;
			}
			else
			{
				val-=start;
				y--;
				start = 365+is_leap(y)-val;
				if(!is_leap(y))
				{
					for(i=1;i<=12;i++)
					{
						if(notleap[i]>start)
						{
							m = i;
							d = start-notleap[i-1];
							break;
						}
					}
				}
				else
				{
					for(i=1;i<=12;i++)
					{
						if(leap[i]>start)
						{
							m = i;
							d = start-leap[i-1];
							break;
						}
					}
				}
			}

			cout<<d<<" "<<m<<" "<<y<<endl;

		}
		return 0;

	}