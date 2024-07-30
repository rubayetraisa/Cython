#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[10000],i,m;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        m=1000000;
        for(i=1;i<n;i++)
        {
            m=min(m,abs(a[i]-a[i-1]));
        }
        cout<<m<<endl;
    }
}
