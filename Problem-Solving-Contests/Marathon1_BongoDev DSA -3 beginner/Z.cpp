#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,m,mod,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        m=1;
        mod=1000000007;
        for(i=0;i<k;i++)
        {
            m=((m%mod)*(n%mod))%mod;
        }
        cout<<m<<endl;
    }

}
