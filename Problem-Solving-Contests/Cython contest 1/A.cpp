#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,k,ans;
    long double s,p[100];
    cin>>t;
    s=0;
    for(i=0;i<=30;i++)
    {
        s+=pow(2,i);
        p[i]=s;
        //cout<<p[i]<<endl;
    }
    t--;
    while(t--)
    {
        cin>>n;
        k=(long long)(log2(n));
        ans=((n*(n+1))/2)-p[k]*2;
        //cout<<p[k]<<endl;
        cout<<ans<<endl;
    }
        cin>>n;
        k=(long long)(log2(n));
        ans=((n*(n+1))/2)-p[k]*2;
        //cout<<p[k]<<endl;
        cout<<ans;
}
