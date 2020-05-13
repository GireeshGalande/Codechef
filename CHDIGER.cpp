#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
    string x;
    unsigned long long y,p;
    for(int i=0;i<t;i++)
    {    cin>>x>>n;
          p=0;
          y=x.size();
          if(y==1)
              {
                if((x[0]-'0')>n)
                  cout<<n<<"\n";
                else
                  cout<<x<<"\n";
              }
          else
          {
             for(unsigned long long j=0;j<=y-p;)
              {
                 if((x[j]-'0')>=n)
                    {
                     char z=n+'0';
                     x=x.substr(0,j)+x.substr(j+1,x.size()-j-1)+z;
                     p++;
                    }
                  else
                    j++;
               }
              cout<<x<<"\n";
          }
    }
  return 0;
}