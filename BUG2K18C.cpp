#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int c=a.length(),d=b.length(),e=0;
        for(int j=0;j<c;j++)
            for(int k=j;k<d;k++)
                    if(a[j]==b[k]){e++;break;}
        if(e==c)cout<<"Yes\n";
        else cout<<"No\n";
    }
return 0;
}