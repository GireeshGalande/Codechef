#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
 for(int i=2;i<sqrt(n);i++)
	{
	 if(n%i==0)return false;
	}
	return true;
}
int main()
{
int n,i,j;
bool a,b;
cin>>n;
i=n;
j=n;
a=prime(n);
if(a==true){cout<<"0";return 0;}
while(a||b)
	{
	 a=prime(i+1);
     b=prime(j-1);
	 i++;j--;
	}
	if(prime(j+1))cout<<j+1<<endl;
	else cout<<i+1<<endl;
	return 0;
}