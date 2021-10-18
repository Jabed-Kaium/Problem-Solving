#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a,b,q,x,lastx,y,lasty,temp,temp1,temp2,temp3;
  while(cin>>a>>b){

    x=0;
    y=1;
    lastx=1;
    lasty=0;
    while (b!=0)
    {
        q= a/b;
        temp1= a%b;
        a=b;
        b=temp1;

        temp2 = x;
        x=lastx-q*x;
        lastx = temp2;

        temp3 = y;
        y = lasty-q*y;
        lasty=temp3;
    }

    cout<<lastx<<" "<<lasty<<" "<<a<<endl;

  }
  return 0;
}
