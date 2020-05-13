#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,y;
	cin>>t;
	string s,z;
	for(int i=0;i<t;i++)
	{ x=0;y=0;
      cin>>n>>s;
	  string a[n];
	  for(int j=0;j<n;j++)
	  {cin>>a[j];
        z=a[j];
		if(z[0]=='0')
			x++;
		else y++;
	  }
	  if(x<y)cout<<"Dee\n";
	  else if(x>y)cout<<"Dum\n";
	  else cout<<s<<"\n";
	}
	return 0;
}
        