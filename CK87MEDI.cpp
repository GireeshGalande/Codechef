#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int j=0;j<n;j++)
	  cin>>a[j];
   sort(a,a+n);
   int x=(n+k)/2;
   cout<<a[x]<<"\n";
}
return 0;
}