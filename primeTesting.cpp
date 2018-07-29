#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<10000010> bs;
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
			if(bs[i])	//the loop starts from i*i coz for lower multiples like i*(i-1) or so the bitset 
			{			//would have been updated when considering cases for (i-1) or lesser numbers
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
		

		sieve(10000000);
		ll n,i,j=primes.size();
		// cout<<j<<endl;
		// for(i=0;i<100;i++)
		// 	cout<<primes[i]<<" ";
		// cout<<endl;
		while(cin>>n && n)
			{
				cout<<"n = "<<n<<endl;
				if(isPrime(n))
					cout<<"prime"<<endl;
				else
					cout<<"not a prime"<<endl;
			}
		return 0;		
	}	