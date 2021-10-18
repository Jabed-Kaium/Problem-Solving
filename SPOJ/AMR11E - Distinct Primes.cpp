//Prime Factorization using sieve
//Ref : CodeNCode (Youtube)
//Complexity : O(logn)

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

int ar[1000001];
vector <int> ans;

void sieve() {
	int MAXN = 1000000;

	for (int i = 1; i <= MAXN; i++)ar[i] = -1;

	for (int i = 2; i <= MAXN; i++) {
		if (ar[i] == -1) {
			for (int j = i; j <= MAXN; j += i) {
				if (ar[j] == -1) {
					ar[j] = i;
				}
			}
		}
	}
}

void prime_factor(int n) {
	int tmp = n;
	set<int>s;
	while (n > 1) {
		s.insert(ar[n]);
		n /= ar[n];
	}
	if (s.size() >= 3)ans.pb(tmp);
}

int main()
{

	sieve();
	for (int i = 1; i <= 5000; i++) {
		prime_factor(i);
	}
	sort(ans.begin(), ans.end());
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << ans[n - 1] << "\n";
	}

	return 0;
}