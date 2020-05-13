#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n,m;
		cin>>n>>m;
       int b;
	   b=((n*m)-1)%2;
	   if(b==1)cout<<"Yes\n";
	   else cout<<"No\n";
	}
	return 0;
}