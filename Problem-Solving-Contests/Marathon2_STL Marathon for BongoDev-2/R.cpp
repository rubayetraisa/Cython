#include<bits/stdc++.h>
using namespace std;
long long x[300005];
int main()
{
    long long t,a,b,i;
    x[0]=0;
    for(i=1;i<=300000;i++)
    {
        x[i]=x[i-1]^i;
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if((x[a-1]^b)==0)
            cout<<a<<endl;
        else if((x[a-1]^b)!=a)
            cout<<a+1<<endl;
        else
            cout<<a+2<<endl;
    }
}
