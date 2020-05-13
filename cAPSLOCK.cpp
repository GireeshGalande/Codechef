#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a;
 cin>>a;
int b=a.length();
int c[b],d=0,e=0;
 for(int i=0;i<b;i++)
     c[i]=a[i];
 for(int i=0;i<b;i++)
    {if((c[i]>=65)&&(c[i]<=90))d++;
     if((c[i]>=97)&&(c[i]<=122))e++;
    }
 if(d==b)
     for(int i=0;i<b;i++)
         a[i]=a[i]+32;
 else if((e==1)&&(a[0]>=97)&&a[0]<=122)
 {
     a[0]=a[0]-32;
     for(int i=1;i<b;i++)
        a[i]=a[i]+32;
 }
 cout<<a<<"\n";
return 0;
}
