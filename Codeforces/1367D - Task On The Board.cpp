#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    string s;
    int n;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        int a[n+5];
        char ch[n+5];

        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());

        while(s.length() > 0){
            int largest_same_char = 0,i;
            char c;
            //count the number of the largest letter in the input string
            for(i=0; i<s.length(); i++){
                if(s[i]==s[i+1])largest_same_char++;
                else{
                    largest_same_char++;
                    c = s[i];
                    break;
                }
            }
            i++;
            s.erase(s.begin() , s.begin() + i);

            //count the number of zeroes in the array a
            int countZero = 0;
            for(int j=1; j<=n; j++){
                if(a[j] == 0){
                    a[j] = -1;
                    countZero++;
                }
            }

            //fill the position which is 0 with largest letter from input string which fulfills the condition 
            if(countZero <= largest_same_char){
                for(int k=1; k<=n; k++){
                    if(a[k] == -1){
                        a[k] = INT_MIN;
                        ch[k] = c;
                        for(int kk=1; kk<=n; kk++){
                            if(kk != k && a[kk]>0){
                                a[kk] -= abs(k-kk);
                            }
                        }
                    }
                }
            }
            else{
                for(int j=1; j<=n; j++){
                    if(a[j] == -1){
                        a[j] = 0;
                    }
                }
            }
        }

        for(int i=1; i<=n; i++){
            cout<<ch[i];
        }

        cout << "\n";
    }
    
    return 0;
}