#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
int phi[MAX];
void find_phi()
{
    int i,j;
    for(i=2;i<=MAX;i++)
        phi[i]=i;
    for(i=2;i<=MAX;i++)
    {
        if(phi[i]==i)
        {
            for(j=i;j<=MAX;j+=i)
                phi[j]-=phi[j]/i;//Inclusion_Exclusion Law use
        }
    }
}
int main()
{
    find_phi();
    for(int i=2; i<=MAX; i++)phi[i] = i-phi[i];
    for(int i=2; i<=MAX; i++)phi[i] = phi[i]+phi[i-1];
    int n,t;
    cin>>t;
    for(int i=1; i<=t; i++){
      cin>>n;
      cout<<"Case "<<i<<": "<<phi[n]<<endl;
    }
    return 0;
}
