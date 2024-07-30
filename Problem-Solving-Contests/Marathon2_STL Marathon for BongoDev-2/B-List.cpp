#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,k,t,x;
    cin>>q;
    list<long long>l;
    list<long long>::iterator itr;
    itr=l.begin();
    while(q--)
    {
        cin>>t;

        if(t==0)
        {
            cin>>x;
            l.insert(itr,x);
            --itr;
        }
        else if(t==1)
        {
            cin>>x;
            if(x>0)
            {
                while(x--)
                    itr++;
            }
            else
            {
                x=abs(x);
                while(x--)
                    itr--;
            }
        }
        else
        {
                l.erase(itr);
                itr++;

        }

    }
    list<long long>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }
}
