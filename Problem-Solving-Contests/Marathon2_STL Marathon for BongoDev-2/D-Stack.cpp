#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,t,x,k;

    cin>>n>>q;
    stack<long long>st[n];

    while(q--)
    {
        cin>>k>>t;

        if(k==0)
        {
            cin>>x;
            st[t].push(x);
        }
        else if(k==1)
        {
            if(!st[t].empty())
                cout<<st[t].top()<<endl;
        }
        else
        {
            if(!st[t].empty())
                st[t].pop();
        }
    }
}

