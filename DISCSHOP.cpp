#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(int argc, char const *argv[])
{
   // ios::sync_with_stdio(0);
    //cin.tie(0);
   // #ifndef ONLINE_JUDG
    //freopen("Input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    //#endif
    ll T;
    cin>>T;

    while(T--){
        long s,p,q=0,r;
        cin>>s;
        p=s;
        vector<int>a,b;
        while(s!=0)
          a.push_back(s%10);
        for(i=a.end();i>=a.begin();i--)
          {
            b.push_back(a[i]);
            if(b[i]>q)q=b[i];
          }
          long y=0;
        for(i=b.begin();i<b.end();i++)
           {
            if(b[i]!=q)
              {
                y*=10;
                y+=b[i];
              }
             else
               {
                r=i+1;
                break;
               } 
           }  

        
           
           for(int i=r;i<b.end();i++)
             {
              y*=10;
              y+=b[i];
            }
            cout<<y<<"\n";
    }
    return 0;
}
