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
		string a,b;
		cin>>a;
		int c=0;
		for(int j=0;j<a.length();j++)
          if(a[j]=='>')
			{
			  b=a.substr(j+1,a.length());
			  break;
			}
		for(int j=0;j<b.length()-1;j++)
			if(b[j]=='<'&&b[j+1]=='>')c++;
		cout<<c<<"\n";
	}
	return 0;
}
                        