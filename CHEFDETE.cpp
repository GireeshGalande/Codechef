#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t,x;
cin>>t;
int a[t+1]={0};
for(int i=0;i<=t;i++)
{cin>>x;a[x]++;}
for(int i=0;i<=t;i++)
if(a[i]==0)
   cout<<i<<" ";
cout<<"\n";
return 0;
}