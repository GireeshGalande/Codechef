#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int a,b;
 cin>>a>>b;
  long c=a*b;
  long d=2*(a+b);
  if(c>d){cout<<"Area\n ";cout<<c;}
  else if(c<d){cout<<"Peri\n ";cout<<d;}
  else {"Eq\n ";cout<<c;}
 return 0;
}
