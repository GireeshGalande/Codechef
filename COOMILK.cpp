#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
	{int n,k=0;
    cin>>n;
     string a[n];
	 for(int j=0;j<n;j++)
		 cin>>a[j];
	 if(a[n-1]=="cookie")cout<<"NO\n";
	 else 
	 {
	 for(int j=0;j<n-1;j++)
		 if(a[j]=="cookie"&&a[j+1]!="milk")
		 {k=1;break;}
	 if(k==0)cout<<"YES\n";
	 else cout<<"NO\n";
	 }
				}
return 0;}
