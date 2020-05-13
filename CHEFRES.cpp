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
 long a[n],b[n],c[m];
 vector<pair<long , long > >v;
 for(int j=0;j<n;j++)
 cin>>a[j]>>b[j];
 for(int j=0;j<n;j++)
   v.push_back(make_pair(a[j],b[j]));
 sort(v.begin(),v.end());
 for(int j=0;j<m;j++)
 {  cin>>c[j];bool x=true;
     for(int k=0;k<n;k++)
	   if((c[j]>=v[k].first)&&(c[j]<v[k].second))
	   {cout<<"0\n";x=false;break;}
   if(x)
	 for(int k=0;k<n;k++)
	    if(c[j]<v[k].first)
		{cout<<v[k].first-c[j]<<'\n';x=false;break;}
	if(x)
		cout<<"-1\n";
 }
}
return 0;
}
		
method 2:
		
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
 long a[n],b[n],c[m];
 vector<pair<long , long > >v;
 for(int j=0;j<n;j++)
 {cin>>a[j]>>b[j];
 v.push_back(make_pair(a[j],b[j]));}
 sort(v.begin(),v.end());
 for(int j=0;j<m;j++)
 {  cin>>c[j];bool x=true;
     for(int k=0;k<n;k++)
	   if((c[j]>=v[k].first)&&(c[j]<v[k].second))
	   {cout<<"0\n";x=false;break;}
	   else if (c[j]<v[k].first)
	    {cout<<v[k].first-c[j]<<'\n';x=false;break;}
 	if(x)
		cout<<"-1\n";
 }
}
return 0;
}
