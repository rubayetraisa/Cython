#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[105],i,mx,mn,xi,ni;
    mx=0;
    mn=10000;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            xi=i;
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            ni=i;
        }
    }
    if(ni>xi)
    {
        cout<<xi+(n-1-ni)<<endl;
    }
    else
    {
        cout<<xi+(n-2-ni)<<endl;
    }
}
