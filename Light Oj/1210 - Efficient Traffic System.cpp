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

const int MX = 20005;
vector<int> vec[MX] , tr[MX];
int vis[MX] , belong[MX] , indegree[MX] , outdegree[MX];
vector<int> order;
int scc;
int n, m, a, b;

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
	belong[node] = scc;
	for (int child : tr[node]) {
		if (!vis[child])
			dfs1(child);
	}
}

void dfs2(int node) {
	vis[node] = 1;
	for (int child : vec[node]) {
		if (belong[node] != belong[child]) {
			indegree[belong[child]]++;
			outdegree[belong[node]]++;
		}
		if (!vis[child])
			dfs2(child);
	}
}

void all_clear() {
	for (int i = 0; i < MX; i++) {
		vec[i].clear();
		tr[i].clear();
		vis[i] = 0;
		indegree[i] = 0;
		outdegree[i] = 0;
		belong[i] = 0;
	}
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

		cin >> n >> m;
		while (m--) {
			cin >> a >> b;
			vec[a].pb(b);
			tr[b].pb(a);
		}

		for (int i = 1; i <= n; i++) {
			if (!vis[i])
				dfs(i);
		}

		clr(vis);
		for (int i = 1; i <= n; i++) {
			if (vis[order[n - i]] == 0) {
				scc++;
				dfs1(order[n - i]);
			}
		}

		clr(vis);
		for (int i = 1; i <= n; i++) {
			if (!vis[i])
				dfs2(i);
		}

		int in = 0, out = 0;
		for (int i = 1; i <= scc && scc > 1; i++) {
			if (!indegree[i])
				in++;
			if (!outdegree[i])
				out++;
		}
		printf("Case %d: %d\n", tc, max(in, out));
	}

	return 0;
}