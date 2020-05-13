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
	  long  a[n];
      for(int j=0;j<n;j++)
			cin>>a[j];
		long long lcm;
	long long x=(a[0]*a[1])/__gcd(a[0],a[1]);
    for(int j=0;j<n;j++)
		for(int k=j+1;k<n;k++)
		{
         lcm=(a[j]*a[k])/__gcd(a[j],a[k]);
          if(lcm<x)
				x=lcm;
		}
     cout<<x<<"\n";
 }
	return 0;
}

