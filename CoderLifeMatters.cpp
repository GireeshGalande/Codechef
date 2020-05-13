#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[30],p=0;
        for(int j=0;j<30;j++)
            cin>>a[j];
        for(int j=0;j<30;j++)
        {
            if(a[j]==1)p++;
            else if(a[j]==0)p=0;
            if(p>5)break;

        }
        if(p>5)cout<<"#coderlifematters\n";
        else  cout<<"#allcodersarefun\n";

    }
return 0;
}
