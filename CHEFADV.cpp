#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
     long long  n,m,x,y,p=1,q=1;
     cin>>n>>m>>x>>y;
     if((n==1)&&(m==1))cout<<"Chefirnemo\n";
    else if((n==2)&&(m==2))cout<<"Chefirnemo\n";
     else if((n%x==1)&&(m%y==1))cout<<"Chefirnemo\n";
   else if((n%x==2)&&(m%y==2))cout<<"Chefirnemo\n";
    else
    { while(((n-p)!=0)||((n-p)!=1))
             {p+=x;
              if(p>n)break;
             }
      while(((m-q)!=0)||((m-q)!=1))
             {q+=y;
              if(q>m)break;
             }
      if(((n-p)==0)&&((m-q)==0))cout<<"Chefirnemo\n";
      else if(((n-p==1)&&(m-q)==1))cout<<"Chefirnemo\n";
      else cout<<"Pofik\n";
    }
    }
return 0;
}
