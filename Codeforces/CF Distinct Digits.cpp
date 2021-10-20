#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,rem,n,c;
	vector <int> v;
	cin>>l>>r;
	for(int i=l; i<=r; i++)
	{
		v.clear();
		n=i;
		c=0;
		while(n!=0)
		{
			rem = n%10;
			v.push_back(rem);
			n/=10;
		}
		
		int len = v.size();
		for(int j=0; j<len; j++)
		{
			for(int k=j+1; k<len; k++)
			{
				if(v[j]==v[k])
				{
					c++;
					break;
				}
			}
		}
		if(c==0)
		{
			cout<<i<<endl;
			break;
		}
		else
		{
			continue;
		}
		
	}
	if(c>0)
	{
		cout<<"-1"<<endl;
	}
	
	return 0;
}
