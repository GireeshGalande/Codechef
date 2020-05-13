#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin>>n;
    long long a=0,b=0,c;
	for(long i=1;i<=n;i++)
		a+=i;
	for(long i=0;i<n;i++)
	{cin>>c;
	 b+=c;
	}
	if(a==b)cout<<"YES\n";
	else cout<<"NO\n";
}