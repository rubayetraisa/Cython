#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[1000],i,k,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0,k=0;
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
        {
            if(a[i]+s<i)
            {
                k=1;
                break;
            }
            s-=max((long long)0,i-a[i]);;
            s+=max((long long)0,a[i]-i);
        }

        if(k==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
