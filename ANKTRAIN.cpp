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
		int n;
		cin>>n;
		if(n%8==7)cout<<n+1<<"SU\n";
		else if(n%8==0)cout<<n-1<<"SL\n";
		else if(n%8==6)cout<<n-3<<"UB\n";
		else if(n%8==3)cout<<n+3<<"UB\n";
		else if(n%8==4)cout<<n-3<<"LB\n";
		else if(n%8==1)cout<<n+3<<"LB\n";
		else if(n%8==5)cout<<n-3<<"MB\n";
		else if(n%8==2)cout<<n+3<<"MB\n";
	}
	return 0;
}