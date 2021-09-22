//Idea : Strongly Connected Component

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int dx[] = { -1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

const int MX = 10005;
vector<int> vec[MX] , tr[MX];
int vis[MX];
vector<int> order;
int n, m, scc;
map<string, int> mp;
set<string> names;
string a, b;

void dfs(int node) {
	vis[node] = 1;
	for (int child : vec[node]) {
		if (!vis[child])
			dfs(child);
	}
	order.pb(node);
}

void dfs1(int node) {
	vis[node] = 1;
	for (int child : tr[node]) {
		if (!vis[child])
			dfs1(child);
	}
}

void all_clear() {
	for (int i = 0; i < MX; i++) {
		vec[i].clear();
		tr[i].clear();
		vis[i] = 0;
	}
	names.clear();
	mp.clear();
	order.clear();
	scc = 0;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		all_clear();

		int id = 1, x, y;
		cin >> n;
		while (n--) {
			cin >> a >> b;
			if (!mp[a]) {
				mp[a] = id;
				x = id;
				id++;
			}
			else {
				x = mp[a];
			}
			if (!mp[b]) {
				mp[b] = id;
				y = id;
				id++;
			}
			else {
				y = mp[b];
			}
			vec[x].pb(y);
			tr[y].pb(x);
			names.insert(a);
			names.insert(b);
		}
		id--;

		for (int i = 1; i <= id; i++) {
			if (!vis[i])
				dfs(i);
		}

		clr(vis);
		for (int i = 1; i <= id; i++) {
			if (!vis[order[id - i]]) {
				scc++;
				dfs1(order[id - i]);
			}
		}

		if (scc == names.size()) {
			printf("Case %d: Yes\n", tc);
		}
		else {
			printf("Case %d: No\n", tc);
		}
	}

	return 0;
}