#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{int n,x=0,y=0;
	cin>>n;
	int a[n],b[n];
	for(int j=0;j<n;j++)
	{cin>>a[j];x+=a[j];}
	for(int j=0;j<n;j++)
	{cin>>b[j];y+=b[j];}
	sort(a,a+n,greater<int>());
	sort(b,b+n,greater<int>());
	x=x-a[0];
	y=y-b[0];
	if(x>y)cout<<"Bob\n";
	else if(x<y)cout<<"Alice\n";
	else cout<<"Draw\n";
	}
	return 0;
}