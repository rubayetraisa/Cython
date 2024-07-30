#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[200005],i,s,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        m=s%n;

        cout<<m*(n-m)<<endl;
    }
}
