#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
cin>>T;
for(int i =0;i<T ;i ++)
{
    int n,m,x=0;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)cin>>a[j];
    cin>>m;
    int b[m],k=0;
    for(int j=0;j<m;j++)cin>>b[j];
    for(int j=0;j<n;j++)
    if(a[j]==b[k]){x++;k++;}
    if(x==m)cout<<"Yes\n";
    else cout<<"No\n";            
        
}
return 0 ;
}