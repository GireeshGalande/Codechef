METHOD 1 :

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,b=0;
		cin>>n;
		string a;
		cin>>a;
		for(int j=0;j<n;j++)
          if(a[j]=='1')
		    for(int k=j;k<n;k++)
                 if(a[k]=='1')b++;
		cout<<b<<"\n";
	}
	return 0;
}



METHOD 2:

#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{   int n;long x=0;
	cin>>n;
	string s;
	cin>>s;
	for(int j=0;j<n;j++)
	  if(s[j]=='1')
      {x++;
		for(int k=j+1;k<n;k++)
          if(s[k]=='1')
				x++;
      }
    cout<<x<<"\n";
}
return 0;
}