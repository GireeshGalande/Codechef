#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int j=0;j<n;j++)cin>>a[j];
        int b=sizeof(a)/sizeof(a[0]);
        for(int j=0;j<n-1;j++)
        while(a[j]!=a[j+1])
        {
        sort(a,a+b,greater<int>());
        a[0]=a[0]-a[1];
        }
        cout<<a[0]<<"\n";
    }
    return 0;
}
