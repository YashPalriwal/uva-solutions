#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<20000010> bs;
ll sieve_size;
vector<ll> primes;

void sieve(ll n)
	{
		sieve_size = n+1;
		bs.set();
		bs[0] = bs[1] = 0;
		ll i,j;
		for(i=2;i<=sieve_size;i++)
		{
			if(bs[i])
			{
				for(j=i*i;j<=sieve_size;j+=i)
					bs[j] = 0;
				primes.push_back(i);
			}
		}
	}

int isPrime(ll n)	
	{
		if(n<=sieve_size)
			return bs[n];
		int i,j = primes.size();
		for(i=0;i<j;i++)
			if(n%primes[i]==0) return 0;
		return 1;
	}
int main()
	{
		sieve(20000000);
		ll i,j,k,n;
		j = primes.size();
		vector<pair<ll,ll> > res;
		// res.push_back(make_pair(3,5));
		for(i=0;i<j;i++)
			{
				if(primes[i]+2==primes[i+1])
					{
						res.push_back(make_pair(primes[i],primes[i+1]));
					}
			}
		// cout<<j<<endl;
		while(scanf("%lld",&n)==1)
		{
			printf("(%lld, %lld)\n",res[n-1].first,res[n-1].second);
			
		}
		return 0;
	}	