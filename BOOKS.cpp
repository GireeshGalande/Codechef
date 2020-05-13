#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,m;
 cin>>n>>m;
 vector <pair <int,int> >v;
 int a[m],b[n],c[n];
 for(int j=0;j<m;j++)
	cin>>a[j];
  for(int j=0;j<n;j++)
	cin>>b[j];
  for(int j=0;j<n;j++)
	cin>>c[j];
  for(int j=0;j<n;j++)
   v.push_back(make_pair(b[j],c[j]));
  sort(v.begin(),v.end());
  for(int k=0;k<n;k++)
  {int x=0;long y=0;
	  for(int j=0;j<m;j++)
	   if(a[j]>=v[k].first&&a[j]<=v[k].second)
	    {x++;y+=a[j];}
	cout<<x<<" "<<y<<"\n";
  }
}
return 0;
}

      