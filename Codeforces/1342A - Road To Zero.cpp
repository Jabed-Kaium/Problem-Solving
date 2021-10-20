    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        ll t;
        cin>>t;
        while(t--){
            ll x,y,a,b;
            cin>>x>>y>>a>>b;
            if(2*a<=b)cout<<(x+y)*a<<"\n";
            else cout<<(min(x,y)*b)+(abs(x-y)*a)<<"\n";
        }
     
        return 0;
    }