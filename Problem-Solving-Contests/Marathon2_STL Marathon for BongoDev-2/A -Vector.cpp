#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,q,x,op,i;
    vector<long long>v[10005];
    cin>>n>>q;
    while(q--)
    {
        cin>>op;
        if(op==0)
        {
            cin>>t>>x;
            v[t].push_back(x);
        }
        else if(op==1)
        {
            cin>>t;
            long long l=v[t].size();
            if(l==0)
            {
                cout<<endl;
                continue;
            }
            for(i=0;i<l-1;i++)
            {
                cout<<v[t][i]<<" ";
            }
            cout<<v[t][l-1]<<endl;
        }
        else
        {
            cin>>t;
            v[t].clear();
        }
    }
}
