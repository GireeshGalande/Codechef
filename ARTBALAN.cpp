#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	string s;
   for(int i=0;i<t;i++)
   {
   	cin>>s;
   	x=0;
   	vector<long>a(26,0);
   	sort(s.begin(),s.end());
   	for(int j=65;j<=90;j++)
   		for(long k=0;k<s.length();k++)
   			if(s[k]==j)
   				a[x]++;
   			else {x++;break;}
    sort(a.begin(),a.end());
    for(int j=25;j>0;j--)
        for(int k=0;k<25;k++)
           if(a[k]!=0)
               while(a[j]!=a[j-1])
                      {
                      	a[k]++;
                      	a[j]--;
                      }
                      
