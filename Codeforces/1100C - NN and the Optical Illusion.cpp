#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long
#define pi acos(-1)

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n,r,angle;

    cin>>n>>r;

    angle = pi/n;

    angle = 1/sin(angle);

    printf("%.7lf\n", r/(angle-1));

    return 0;
}