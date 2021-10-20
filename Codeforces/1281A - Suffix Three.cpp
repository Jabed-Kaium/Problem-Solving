#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		string s, fil, jap, japp, kor;
		cin >> s;
		int cnt = 0;
		for (auto it = s.rbegin(); it != s.rend() && cnt < 2; it++) {
			fil += (*it);
			cnt++;
		}
		cnt = 0;
		for (auto it = s.rbegin(); it != s.rend() && cnt < 4; it++) {
			jap += (*it);
			cnt++;
		}
		cnt = 0;
		for (auto it = s.rbegin(); it != s.rend() && cnt < 4; it++) {
			japp += (*it);
			cnt++;
		}
		cnt = 0;
		for (auto it = s.rbegin(); it != s.rend() && cnt < 5; it++) {
			kor += (*it);
			cnt++;
		}
		if (fil == "op") {
			cout << "FILIPINO\n";
			continue;
		}
		if (jap == "used") {
			cout << "JAPANESE\n";
			continue;
		}
		if (japp == "usam") {
			cout << "JAPANESE\n";
			continue;
		}
		if (kor == "adinm") {
			cout << "KOREAN\n";
			continue;
		}
	}

	return 0;
}