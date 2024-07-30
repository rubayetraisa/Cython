#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[55],i,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        map<long long,long long>m;
        for(i=0;i<n;i++)
        {
            while(a[i]>n)
            {
                a[i]=a[i]/2;
            }
        }

        for(i=0;i<n;i++)
        {
            if(m[a[i]]==0)
            {
                m[a[i]]++;
            }
            else if(m[a[i]]>0&&a[i]!=1)
            {
                while(m[a[i]]!=0)
                {
                    a[i]=a[i]/2;
                    if(a[i]==1||a[i]==0)
                        break;
                }
                m[a[i]]++;
            }
        }
        k=0;
        for(i=1;i<=n;i++)
        {
            if(m[i]==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
