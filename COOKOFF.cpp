#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long t;
cin>>t;
for(long i=0;i<t;i++)
{
	long n,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
	cin>>n;
	string a[n];
	for(int j=0;j<n;j++)
	cin>>a[j];
	for(int j=0;j<n;j++)
		if(a[j]=="cakewalk")
		  p++;
	   else if(a[j]=="simple")
		  q++;
	   else if(a[j]=="easy")
		  r++;
	   else if(a[j]=="easy-medium")
		  s++;
	   else if(a[j]=="medium")
		  t++;
	  else if(a[j]=="medium-hard")
		  u++;
	   else
		  v++;
	  if(p>=1&&q>=1&&r>=1)
	  {if(s>=1&&u>=1)cout<<"Yes\n";
       else if(s>=1&&v>=1)cout<<"Yes\n";
	   else if(t>=1&&u>=1)cout<<"Yes\n";
	   else if(t>=1&&v>=1)cout<<"Yes\n";
	   else cout<<"No\n";
	  }
	  else cout<<"No\n";
}
return 0;
}
