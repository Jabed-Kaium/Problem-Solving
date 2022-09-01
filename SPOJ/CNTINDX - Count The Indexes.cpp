#include<bits/stdc++.h>
using namespace std;
#define int         unsigned long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


	map<int,vector<int>> v;
	vector<int> count;
	int track=-1;
	int q;
	cin>>q;
	while(q--){
		int id, val, i, j;
		cin>>id;
		if(id == 1){
			cin>>val;
			count.pb(val);
			track++;
			v[val].pb(track);
		}
		else if(id == 0){
			if(count.empty()){
				cout << "invalid\n";
			}
			else{
				v[count.back()].pop_back();
				count.pop_back();
				track--;
			}

		}
		else if(id == 2){
			cin>>val>>i>>j;
			i--, j--;
			auto it = lower_bound(v[val].begin(),v[val].end(),i);
			auto it2 = upper_bound(v[val].begin(),v[val].end(),j);
			it2--;

			int f = it-v[val].begin();
			int l = it2-v[val].begin();

			cout << l-f+1 << "\n";
		}
	}
    

    return 0;
}