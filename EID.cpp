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
        cin>>n;
        long a[n];
        int p=0;
        for(int j=0;j<n;j++)cin>>a[j];
        int c=sizeof(a)/sizeof(a[0]);
        sort(a,a+c);
        long b=abs(a[0]-a[1]);
        for(int j=0;j<n-1;j++)
            {if(a[j]==a[j+1])p=1;
            else if(abs(a[j]-a[j+1])<b)b=abs(a[j]-a[j+1]);
            }
        if(p==1)cout<<"0\n";
        else cout<<b<<"\n";

    }
return 0;
}