#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{   int x=0,y=0,p=1,q=1;
	string a;
	cin>>a;
	for(int j=0;j<a.length();j++)
	{
		if(a[j]=='U')
		{x++;
	     if(a[j+1]=='U')p++;
		}
		else if(a[j]=='D')
		{y++;
	     if(a[j+1]=='D')q++;
		}
	}
		