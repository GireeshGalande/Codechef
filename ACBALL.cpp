#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	string a,b;
	cin>>a>>b;
	char c[a.length()];
    for(int j=0;j<a.length();j++)
	{if(a[j]==b[j])
		{if(b[j]=='W')
	    	c[j]='B';
	    else  if(b[j]=='B')
			c[j]='W';
		}
     else c[j]='B';
	 cout<<c[j];
    }
    cout<<"\n";
}
return 0;
}	