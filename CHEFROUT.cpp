#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{string a;
 cin>>a;
int x= a.length();
bool y=true;
if(x==1){cout<<"yes\n";y=false;}
else 
 for(int j=0;j<x-1;j++)
	if(a[j]=='E'&&a[j+1]=='C')
		{cout<<"no\n";y=false;break;}
	else if(a[j]=='S'&&a[j+1]!='S')
		{cout<<"no\n";y=false;break;}
if(y)
  cout<<"yes\n";    
}
return 0;
}
