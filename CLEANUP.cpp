#include<bits/stdc++.h>
using namespace std;
void printKMissing(int arr[], int n, int k,int e[])
{
    sort(arr, arr + n);
k++;
    int i = 0;
    while (i < n && arr[i] <= 0)
        i++;
int o=0;
    int count = 0, curr = 1;
    while (count < k && i < n) {
        if (arr[i] != curr) {
            e[o]=curr;o++;
            count++;
        }
        else
            i++;

        curr++;
    }

    while (count < k) {
        e[o]=curr;o++;curr++;
        count++;
    }
}
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int l=0;l<t;l++)
	{
	int n,m,b,d;
	cin>>n>>m;
	int a[m];
	for(int j=0;j<m;j++)cin>>a[j];
	int c=sizeof(a)/sizeof(a[0]);
	int k=n-m;
	int e[k]={0};
	printKMissing(a,c,k,e);
	if(k%2==1){b=k/2+1;d=k/2;}
	else{b=d=k/2;}
    int f[b],g[d];
f[0]=e[0]; n=1;m=0;
    for(int j=1;j<k;j++)
        {
            if(j%2==0){f[n]=e[j];n++;}
            else {g[m]=e[j];m++;   }
    	}
    	for(int j=0;j<b;j++)cout<<f[j]<<" ";
     cout<<"\n";
         if(d==0)cout<<" ";
         else for(int j=0;j<d;j++)cout<<g[j]<<" ";
         cout<<"\n";
	}
return 0;
	 }