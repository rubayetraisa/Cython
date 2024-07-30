#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,n,a[1000],i,m,mod=1000000007;
    cin>>t;

    while(t--)
    {
        cin>>n;
        m=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m=((m%mod)*(a[i]%mod))%mod;
        }

        cout<<m<<endl;
    }
}
