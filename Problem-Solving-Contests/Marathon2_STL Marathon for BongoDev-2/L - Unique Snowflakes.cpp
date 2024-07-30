#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,ans,l,m,lastpos,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0,lastpos=0;
        map<long long,long long>m,p;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(m[x]==1)
            {
                if(lastpos<p[x])
                    lastpos=p[x];
                m[x]=0;
            }
            m[x]++;
            p[x]=i;

            ans=max(i-lastpos,ans);
        }
        cout<<ans<<endl;
    }
}
