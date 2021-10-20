#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll n,m,temp,temp2,div1,div2,sum,i,t;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        sum=0;
        if(m%10==0)
        {
            cout<<0<<endl;
        }
        else if(m%2==0)
        {
            temp = n/m;
            div1 = temp/5;
            sum = div1*20;
            temp2 = div1*5;
            div2 = temp2*m;
            for(i=div2+m; i<=n; i+=m)
            {
                sum = sum+(i%10);
            }

            cout<<sum<<endl;
        }
        else if(m%2!=0 && m%5!=0)
        {
            temp = n/m;
            div1 = temp/10;
            sum = div1*45;
            temp2 = div1*10;
            div2 = temp2*m;
            for(i=div2+m; i<=n; i+=m)
            {
                sum = sum+(i%10);
            }

            cout<<sum<<endl;
        }
        else
        {
            temp = n/m;
            div1 = temp/2;
            sum = div1*5;
            temp2 = div1*2;
            div2 = temp2*m;
            for(i=div2+m; i<=n; i+=m)
            {
                sum = sum+(i%10);
            }

            cout<<sum<<endl;
        }
    }


    return 0;
}
