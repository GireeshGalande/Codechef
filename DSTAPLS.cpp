#include<bits/stdc++.h>
using namespace std;
int main() 
{
long long t,n,k,x;
bool y;
cin>>t;
for(int i=0;i<t;i++)
{
	y=true;
	cin>>n>>k;
	if(k==1)y=false;
	else
	{
	x=pow(k,k);
	if(n%x==0)
	   false;	
	}
    if(y==false)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
return 0;
}