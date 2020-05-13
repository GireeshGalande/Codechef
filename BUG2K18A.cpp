#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      long n;
      long long r;
      cin>>n>>r;
      long long a[n];
      long x=n,y=0,z=0;
      for(int j=0;j<n;j++)
        {cin>>a[j];
      if(a[j]<=r)y++;}
      z=y;
      cout<<x<<" "<<y<<" "<<z<<"\n";
    }
return 0;
}
