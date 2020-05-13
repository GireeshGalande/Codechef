#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{long x,y,n,m;
 cin>>x>>y>>n>>m;
 long long p=x*n;
 long long q=y*m;
 long r=(x*y)/__gcd(x,y);
 if(p>=q&&q>=r)
 cout<<"YES\n";
else if(q>=p&&p>=r)
 cout<<"YES\n";
 else
	 cout<<"NO\n";
}
return 0;
}


	 
 