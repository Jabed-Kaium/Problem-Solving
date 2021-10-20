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

// ll dx[] = { -1 , 0 , 1 , 0};
// ll dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	string s;
	stack<char> stk;
	cin >> s;
	int len = s.length() , cnt = 0;
	for (int i = 0; i < len; i++) {
		if (stk.empty()) {
			stk.push(s[i]);
		}
		else {
			if (stk.top() == s[i]) {
				cnt++;
				stk.pop();
			}
			else {
				stk.push(s[i]);
			}
		}
	}
	if (cnt % 2 != 0) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	return 0;
}