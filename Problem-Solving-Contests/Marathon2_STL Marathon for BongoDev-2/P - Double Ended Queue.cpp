#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,q,x,j;
    string s;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cout<<"Case "<<j<<":"<<endl;
        deque<long long>dq;
        cin>>n>>q;
        while(q--)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>x;
                if(dq.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    dq.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>x;
                if(dq.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    dq.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(s=="popLeft")
            {
                if(dq.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    x=dq.front();
                    dq.pop_front();
                    cout<<"Popped from left: "<<x<<endl;
                }
            }
            else if(s=="popRight")
            {
                if(dq.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    x=dq.back();
                    dq.pop_back();
                    cout<<"Popped from right: "<<x<<endl;
                }
            }
        }
    }
}
