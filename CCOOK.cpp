#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{int b=0;
	int a[5];
	for(int j=0;j<5;j++)
	{cin>>a[j];
	if(a[j]==1)b++;}
	if(b==0)cout<<"Beginner\n";
    else if	(b==1)cout<<"Junior Developer\n";
	else if	(b==2)cout<<"Middle Developer\n";
	else if	(b==3)cout<<"Senior Developer\n";
	else if	(b==4)cout<<"Hacker\n";
	else cout<<"Jeff Dean\n";
}
return 0;
}
