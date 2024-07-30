#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100005],i,p[100005],l,r,q;
    cin>>n;
    p[-1]=0;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
       p[i]=p[i-1]+a[i];
    }

    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<endl;
    }
}
