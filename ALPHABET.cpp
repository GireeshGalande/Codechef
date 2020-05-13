#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n;
	cin>>a>>n;
  for(int i = 0; i<n; ++i)
  {string b;
	  cin>>b;
  int l=0;
  for(int k=0;k<a.size();k++)
   for(int j=0;j<b.size();j++)
            if(a[k]==b[j])l++;
    if(l==b.size())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
return 0;
}
