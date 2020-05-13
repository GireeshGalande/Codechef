#include<bits/stdc++.h>
using namespace std;
int main()
{
string n,m="";
cin>>n;
char c;
int a=n.size(),b=0;
for(int i=0;i<n.size()/2;i++)
	{
      if(n[i]!=n[a-1]){c=n[i];b++;}
	  a--;
	 }
	 if(b>1)cout<<"-1"<<endl;
	 else if(b==0) cout<<n<<endl;
	 else {
		 m=n.substr(0,a+1)+c+n.substr(a+1,sizeof(n)-(a+2));
		 cout<<m<<endl;
	 }
	 return 0;
}