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

	int n;
	cin >> n;
	while (n--) {
		string s, s2;
		int sum1, sum2;
		queue <char> q1, q2;
		cin >> s >> s2;
		for (int i = 0; i < s.length(); i++) {
			q1.push(s[i]);
		}
		for (int i = 0; i < s2.length(); i++) {
			q2.push(s2[i]);
		}
		bool flag = true;
		while (!q1.empty()) {
			char x = q1.front();
			sum1 = 1 , sum2 = 0;
			q1.pop();
			while (!q1.empty() && q1.front() == x) {
				sum1++;
				q1.pop();
			}
			while (!q2.empty() && q2.front() == x) {
				sum2++;
				q2.pop();
			}
			if (sum1 > sum2 || sum2 == 0)
				flag = false;
		}
		if (!flag || !q2.empty())
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}