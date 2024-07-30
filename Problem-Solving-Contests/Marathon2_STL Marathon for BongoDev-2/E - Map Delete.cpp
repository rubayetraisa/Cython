#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,x,k;
    string t;
    cin>>q;
    map<string,long long>mp;

    while(q--)
    {
        cin>>k>>t;

        if(k==0)
        {
            cin>>x;
            mp[t]=x;
        }
        else if(k==1)
        {
            cout<<mp[t]<<endl;
        }
        else
        {
                mp.erase(t);
        }
    }
}


