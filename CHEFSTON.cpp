#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        long long k,a[n]={0},b[n]={0};
        cin>>n>>k;
        for(int j=0;j<n;j++)cin>>a[j]>>b[j];
        unsigned long long c=(k/a[0])*b[0];
        for(int j=1;j<n;j++)
           if(((k/a[i])*b[i])>c)c=(k/a[i])*b[i];
       cout<<c<<"\n";
    }
return 0;
}
