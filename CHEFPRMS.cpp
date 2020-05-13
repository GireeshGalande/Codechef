#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int a[]={2,3,5,7,11,13,17,19,23,29,31,37,
	41,43,47,53,59,61,67,71,73,79,83,89,97,101,
	103,107,109,113,127,131,137,139,149,151,
	157,163,167,173,179,181,191,193,197,199};
for(int i=0;i<t;i++)
{ bool s=true;
   int n,x,z,p;
    cin>>n;
for(int j=0;j<45;j++)
{
if(a[j]>=n)break;
for(int q=j+1;q<45;q++)
 {
  if(a[q]>=n)break;
  x=a[j]*a[q];
  if(x>n)break;
  for(int k=0;k<45;k++)
    {
     if(a[k]>=n)break;
     for(int r=k+1;r<45;r++)
     {
     z=a[k]*a[r];
     p=x+z;
     if(p>n)break;
    else if(p==n){s=false;break;}
     }
     if(s==false)break;
	 }
	 if(s==false)break;
 }
 if(s==false)break;
}
		if(s==false)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

			   