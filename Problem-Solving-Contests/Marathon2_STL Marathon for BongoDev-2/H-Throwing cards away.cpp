#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cout<<"Discarded cards:";
        deque<long long>dq;
        for(i=1;i<=n;i++)
            dq.push_back(i);

        while(!dq.empty())
        {
            x=dq.front();
            if(dq.size()>2)
                cout<<" "<<x<<",";
            else if(dq.size()>1)
                cout<<" "<<x;

            dq.pop_front();
            if(!dq.empty())
            {
            x=dq.front();
            dq.pop_front();
            dq.push_back(x);
            }
        }
        cout<<"\nRemaining card: "<<x<<endl;
    }
}
