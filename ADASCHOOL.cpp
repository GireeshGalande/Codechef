#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		if(n%2==0||m%2==0)
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
	return 0;
}