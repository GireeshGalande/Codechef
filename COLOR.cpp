#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
     int n,b=0,c=0,d=0;
	 cin>>n;
	 char a[n];
	 for(int i=0;i<n;i++)
		 {
		 cin>>a[i];
		if(a[i]=='R')b++;
		else if(a[i]=='G')c++;
		else d++;
		}
	 if(b>=c&&b>=d)cout<<c+d<<endl;
	 else if(c>=b&&c>=d)cout<<b+d<<endl;
	 else cout<<b+c<<endl;
	}
	return 0;
}
