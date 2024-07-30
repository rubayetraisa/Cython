#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[200005],i,m,c,k;
    cin>>t;

    while(t--)
    {
        cin>>n;
        m=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m=max(m,a[i]);
        }
        k=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(k==m)
                break;

            if(a[i]>k)
            {
                k=a[i];
                c++;
            }
        }
        cout<<c<<endl;
    }
}
