#include<bits/stdc++.h>
using namespace std;
long long a[200005],v[200005];
int main()
{
    long long t,n,i,c,sum;
    cin>>t;

    while(t--)
    {
        vector<pair<long long,long long>>p;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            p.push_back(make_pair(a[i],i));
        }
        sort(p.rbegin(),p.rend());
        c=1;
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=2*c*p[i].first;
            if(i%2==0)
                v[p[i].second]=c;
            else
            {
                v[p[i].second]=-c;
                c++;
            }
        }
        cout<<sum<<endl<<"0 ";

        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
