#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	long long s,x=0,y;
	for(int i=0;i<t;i++)
	{cin>>n>>s>>k;
     int a[n];
	 for(int j=0;j<n;j++)
	 {
	  cin>>a[j];
	  x+=a[j];
	 }
	 if(x>=s)
	   cout<<"0\n";
      else
	  {
		y=((s-x)/k)+((s-x)%k);
		cout<<y<<"\n";
	  }
	}
	return 0;
}
		
		