#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long t;
cin>>t;
char a[]={'A','B','D','C','E','G','F'};
char b[]={'A','C','F','D','G','B','E'};
for(long i=0;i<t;i++)
{string x;
 cin>>x;
 char z;
 for(int j=0;j<x.length();j++)
 {int y=(x[j]-'0')%7;
  z=b[y];
 }
  
  