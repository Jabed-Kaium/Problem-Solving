#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 5;
ll ans = 0;

void powerLL(ll x,ll n)
{
  ll result = 1;
  while(n){
    if(n&1){
      result = result*x%MOD;
    }
    n=n/2;
    x=x*x%MOD;
  }
  ans = ans+result;
}

ll powerstrings(string sa,string sb)
{
  ll a=0,b=0;
  for(int i=0; i<sa.length(); i++){
    a = (a*10 + (sa[i]-'0'))%MOD;
  }
  for(int i=0; i<sb.length(); i++){
    b = (b*10 + (sb[i]-'0'))%(MOD-1);
  }

  powerLL(a,b);
}

int main()
{
  string sa = "1",sb = "2", sc = "3", sd = "4", sn;
  getline(cin,sn);
  powerstrings(sa,sn);
  powerstrings(sb,sn);
  powerstrings(sc,sn);
  powerstrings(sd,sn);

  cout<<ans%MOD<<endl;
}
