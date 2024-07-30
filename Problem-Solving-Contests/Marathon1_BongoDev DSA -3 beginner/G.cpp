#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,h,a[100005],i,c,s,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        s=a[n-1]+a[n-2];
        c=2*(h/s);
        r=h%s;
        if(r<=a[n-1]&&r>0)
            c++;
        else if(r>a[n-1])
            c+=2;
        cout<<c<<endl;
    }
}
