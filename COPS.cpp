#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
cin>>T;
for(int i =0;i<T ;i ++)
{
  int m,x,y;
  cin>>m>>x>>y;
  int a[m],b[m],c[m],k=x*y;
  for(int j=0;j<m;j++)
    { cin>>a[j];
      b[m]=a[j]+k;
      c[m]=a[j]-k;
     }
  sort(b,b+m);
  sort(c,c+m);
      
  
}
return 0 ;
}
