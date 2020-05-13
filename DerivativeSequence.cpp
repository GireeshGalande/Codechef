#include<bits/stdc++.h>
using namespace std;
class DerivativeSequence
{public:
 vector<int> derSeq(vector<int> a,int n)
{vector<int>b;
  for(int i=0,k=1;i<n;i++,k++)
    for(int j=0;j<a.size()-k;j++)
    {
     a[j]=a[j+1]-a[j];
     if((j+1)==(a.size()-k))a[j+1]=0;
    }
  if(a[0]==0)
    for(int i=0;i<a.size()-n;i++)
        b.push_back(0);
  else
    for(int i=0;(i<a.size())&&(a[i]!=0);i++)
       b.push_back(a[i]);
  return b;
}};
int main()
{DerivativeSequence xyz;
  vector<int>g1,b;
  int input;
  for(int i=0;i<5;i++)
    {cin>>input;g1.push_back(input);}
    int n;
    cin>>n;
  b=xyz.derSeq(g1,n);
  for(int i=0;i<b.size();i++)
    cout<<b[i]<<" ";
   cout<<"\n";
  return 0;
}