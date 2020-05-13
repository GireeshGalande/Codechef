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
        int c,d;
        cin>>a>>c>>b>>d;
        int e=stoi(a.substr(0,2));
        int f=stoi(a.substr(3,2));
        f=c+f;
        if(f>=60){e=e+(f/60);f=f%60;}
        int g=stoi(b.substr(0,2));
        int h=stoi(b.substr(3,2));
        h=d+h;
        if(h<0){g--;h=60+h;}
        if(h>=60){g=g+(h/60);h=h%60;}
        if(g>e)cout<<"Yes\n";
        else if((g==e)&&(h>=f))cout<<"Yes\n";
        else cout<<"No\n";

    }
return 0;
}