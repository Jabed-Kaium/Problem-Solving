    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    ll bigmod(ll a,ll b,ll m)
    {
      if(b==0)return 1%m;
      ll x = bigmod(a,b/2,m);
      x = (x*x)%m;
      if(b%2==1)x=(x*a)%m;
      return x;
    }
     
    int main()
    {
      ll t,n,k,tt=0;
      cin>>t;
      while(t--){
        cin>>n>>k;
        double N = k * log10(n*1.0);  //log(n^k)
        N -= floor(N);
        N = pow(10,N);
        N *= 100; //for moving the decimal point to 3 decimal places
     
        printf("Case %lld: %03d %03lld\n", ++tt,(int)N,bigmod(n,k,1000)); //mod by 1000 for getting the last 3 digits of n^k
      }
     
      return 0;
    }
