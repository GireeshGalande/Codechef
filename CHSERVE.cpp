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
		long long k,p1,p2;
		cin>>p1>>p2>>k;
		long long  x=p1+p2;
	     if(((x/k)%2)==0)cout<<"CHEF\n";
		 else cout<<"COOK\n";
	}
	return 0;
}
