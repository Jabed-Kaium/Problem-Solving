#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map <int,char> mp;
	mp[1] = 'c';
	mp[2] = 'o';
	mp[3] = 'd';
	mp[4] = 'e';
	mp[5] = 'f';
	mp[6] = 'o';
	mp[7] = 'r';
	mp[8] = 'c';
	mp[9] = 'e';
	mp[10] = 's';

	ll k;
	ll ans = 1;
	int a[15];

	for(int i=1; i<=10; i++)a[i]=1;

	ll i=1;

	cin>>k;

	while(ans < k){
		ans /= a[i];
		a[i]++;
		ans *= a[i];
		i++;
		if(i>10)i=1;
	}

	for(int i=1; i<=10; i++){
		for(int j=1; j<=a[i]; j++){
			printf("%c", mp[i]);
		}
	}

	printf("\n");
    
    return 0;
}