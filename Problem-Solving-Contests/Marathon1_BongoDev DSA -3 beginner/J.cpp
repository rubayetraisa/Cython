#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1&&m==1)
            cout<<"0"<<endl;
        else if(n==1||m==1)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }
}

