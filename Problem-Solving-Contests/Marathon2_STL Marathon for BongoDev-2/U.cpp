#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,r[105],b[105],pr[105],pb[105],i,mr,mb;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>r[i];
        pr[0]=r[0];
        mr=pr[0];
        for(i=1;i<n;i++)
        {
            pr[i]=pr[i-1]+r[i];
            mr=max(mr,pr[i]);
        }

        cin>>m;
        for(i=0;i<m;i++)
            cin>>b[i];
        pb[0]=b[0];
        mb=pb[0];
        for(i=1;i<m;i++)
        {
            pb[i]=pb[i-1]+b[i];
            mb=max(mb,pb[i]);
        }
        cout<<max((long long)0,mb)+max((long long)0,mr)<<endl;
    }
}
