#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	long long n,q,x;
	for(int i=0;i<t;i++)
	{  x=0;
	  cin>>n>>q;
	  for(int j=1;j<=n/2;j++)
	    if((n%j==0)&&(j%q==0))
              x++;
         if(n%q==0)x++;     
	  cout<<x<<"\n";
	}
 return 0;
} 
	       