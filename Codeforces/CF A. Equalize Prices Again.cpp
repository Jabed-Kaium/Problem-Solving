#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	set <int> s;
	set <int>::iterator it;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0;
		cin>>n;
		for(int i=1; i<=n; i++)
		{
			cin>>x;
			s.insert(x);
			sum+=x;
		}
		for(it=s.begin(); it!=s.end(); it++)
		{
			if((*it)*n>=sum)
			{
				cout<<*it<<endl;
				break;
			}
		}
		
		
	}
	
	return 0;
	
}
