#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{ cin>>a>>b;
       int x[a];
	   c=0;
	   for(int j=0;j<a;j++)
	   {cin>>x[j];
        if(x[j]==1)
			c++;
	   }
	   if((a-c)<=b)
		   cout<<"YES\n";
	   else cout<<"NO\n";
	}
	return 0;
}