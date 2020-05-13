#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{ int n,k,x=0,p;
      cin>>n>>k;
	 int a[n+1];
	 a[0]=0;
	 for(int j=1;j<=n;j++)
		 {cin>>a[j];
          p=a[j]-a[j-1];
          if(p%k==0)
              x+=p/k-1;
          else
              x+=p/k;  
			}
     cout<<x<<"\n";
	}
return 0;
}
