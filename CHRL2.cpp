#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	cin>>a;
	int c=0,h=0,e=0,f=0;
	for(int i=0;i<a.length();i++)
    {   if (a[i]=='C')c++;
		else if((a[i]=='H')&&(h<c))h++;
		else if((a[i]=='E')&&(e<h))e++;
		else if((a[i]=='F')&&(f<e)) f++;
	}
	cout<<f<<"\n";
	return 0;
	}
