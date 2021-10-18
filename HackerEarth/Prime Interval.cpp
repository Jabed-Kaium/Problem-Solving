#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAX 32000
vector <int> primes;

void sieve()
{
    bool isPrime[MAX];
    for(int i=0; i<MAX; ++i) isPrime[i] = true;
    for(int i=3; i*i<=MAX; i+=2)
    {
        if(isPrime[i])
        {
        for(int j=i*i; j<=MAX; j+=i)
        {
            isPrime[j] = false;
        }
        }
    }
    primes.push_back(2);
    for(int i=3; i<MAX; i+=2)
    {
        if(isPrime[i]) primes.push_back(i);
    }
}

void segsieve(ll l, ll r)
{
    bool isPrime[r-l+1];
    for(int i=0; i<r-l+1; ++i) isPrime[i] = true;
    if(l==1) isPrime[0] = false;
    for(int i=0; primes[i]*primes[i]<=r; ++i)
    {
        int currentprime = primes[i];
        ll base = (l/currentprime)*currentprime;
        if(base<l) base += currentprime;
        for(ll j=base; j<=r; j+=currentprime)
        {
            isPrime[j-l] = false;
        }
        if(base==currentprime) isPrime[base-l] = true;
    }

    for(int i=0; i<r-l+1; ++i)
    {
        if(isPrime[i])
            cout<<(i+l)<<" ";
    }
    cout<<"\n";

}

int main()
{
    sieve();

    ll l,r;
    cin>>l>>r;
    segsieve(l,r);

    return 0;
}
