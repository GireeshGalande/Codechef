#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x,m,n;
        unsigned long long a=0;
        cin>>x>>m>>n;
        for(int j=0;j<=m;j++)
            a+=pow(x,j);
        a=a%n;
        cout<<a<<"\n";

    }
return 0;
}
