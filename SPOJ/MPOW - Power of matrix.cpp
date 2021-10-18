//Matrix Exponentiation
//Ref : CodeNCode (Youtube)
//Complexity : O(m^3 * logn)

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

const ll N = 101;
ll ar[N][N] , I[N][N];

void mul(ll A[][N], ll B[][N], ll dim) {

	//for storing llermediate matrix
	ll res[dim + 1][dim + 1];

	//multiplication of two matrix
	for (ll i = 1; i <= dim; i++) {
		for (ll j = 1; j <= dim; j++) {
			res[i][j] = 0;
			for (ll k = 1; k <= dim; k++) {
				res[i][j] = ((res[i][j] % mod) + (((A[i][k] % mod) * (B[k][j] % mod)) % mod)) % mod;
			}
		}
	}

	for (ll i = 1; i <= dim; i++) {
		for (ll j = 1; j <= dim; j++) {
			A[i][j] = res[i][j];
		}
	}
}

void power(ll A[][N], ll dim, ll n) {

	//initialize identity matrix
	for (ll i = 1; i <= dim; i++) {
		for (ll j = 1; j <= dim; j++) {
			if (i == j) I[i][j] = 1;
			else I[i][j] = 0;
		}
	}

	//same as binary exponentiation logic
	while (n) {
		if (n % 2 != 0) {
			mul(I, A, dim);
			n--;
		}
		else {
			mul(A, A, dim);
			n /= 2;
		}
	}

	//copy result to original matrix
	for (ll i = 1; i <= dim; i++) {
		for (ll j = 1; j <= dim; j++) {
			A[i][j] = I[i][j];
		}
	}
}

void printMat(ll A[][N], ll dim) {
	for (ll i = 1; i <= dim; i++) {
		for (ll j = 1; j <= dim; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

int main()
{

	ll t, dim, n;	//dim = dimension
	cin >> t;
	while (t--) {
		cin >> dim >> n;
		for (ll i = 1; i <= dim; i++) {
			for (ll j = 1; j <= dim; j++) {
				cin >> ar[i][j];
			}
		}

		power(ar, dim, n);
		printMat(ar, dim);
	}

	return 0;
}