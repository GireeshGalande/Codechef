#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,y=0,zero=0;
cin>>n;
int a[n],x=n;
for(int j=0;j<n;j++)
{cin>>a[j];
 if(a[j]==0)
 { if(y==0)
    {x=j;y=1;}
   zero++;
  }}
 cout<<zero*1000+(n-x)*100<<"\n";
}
return 0;
}

