#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{ int n;
		float x,d,k,y=0;
		cin>>n>>k>>x>>d;
		float a[n];
		for(int j=0;j<n;j++)
		{cin>>a[j];
	     y+=max(k,(x*a[j])/100);
		}
		if(y>d)cout<<"upfront\n";
		else cout<<"fee\n";
	}
	return 0;
}
		