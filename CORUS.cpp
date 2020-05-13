#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,c,j;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>n>>q;
		cin>>s;
		vector<int>a(26);
		for(int i=0;i<n;i++)
			a[s[i]-'a']++;
		while(q--)
		{
			j=0;
			cin>>c;
            for(int i=0;i<26;i++)
            	if((a[i]-c)>0)
            		j+=a[i]-c;
            cout<<j<<"\n";
            
		}
	}
	return 0;
}