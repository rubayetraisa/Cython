#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,t,x,k;

    cin>>n>>q;
    queue<long long>qu[n];

    while(q--)
    {
        cin>>k>>t;

        if(k==0)
        {
            cin>>x;
            qu[t].push(x);
        }
        else if(k==1)
        {
            if(!qu[t].empty())
                cout<<qu[t].front()<<endl;
        }
        else
        {
            if(!qu[t].empty())
                qu[t].pop();
        }
    }
}
