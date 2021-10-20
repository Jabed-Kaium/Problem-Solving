    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ff first
    #define ss second
    #define pb push_back
    #define mod 1000000007
    #define pi acos(-1)
     
    int main()
    {
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
     
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        ll n,m,max_ans=0,min_ans=0;
     
        cin>>n>>m;
     
        ll temp = n;
        temp -= (m-1);
        max_ans = (temp*(temp-1))/2;
     
        if(n%m == 0){
            ll x = n/m;
            min_ans = (x*(x-1)/2)*m;
        }
        else{
            ll x = n/m;
            min_ans = (x*(x-1)/2) * (m-(n%m));
            min_ans += (((x+1)*x)/2) * (n%m);
        }
     
        cout << min_ans << " " << max_ans << "\n";
     
        return 0;
    }    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ff first
    #define ss second
    #define pb push_back
    #define mod 1000000007
    #define pi acos(-1)
     
    int main()
    {
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
     
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        ll n,m,max_ans=0,min_ans=0;
     
        cin>>n>>m;
     
        ll temp = n;
        temp -= (m-1);
        max_ans = (temp*(temp-1))/2;
     
        if(n%m == 0){
            ll x = n/m;
            min_ans = (x*(x-1)/2)*m;
        }
        else{
            ll x = n/m;
            min_ans = (x*(x-1)/2) * (m-(n%m));
            min_ans += (((x+1)*x)/2) * (n%m);
        }
     
        cout << min_ans << " " << max_ans << "\n";
     
        return 0;
    }