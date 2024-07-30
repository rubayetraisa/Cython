#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t1,n,x,t,s,d;
    cin>>t1;
    while(t1--)
    {
        cin>>n>>x>>t;
        d=t/x;

        if(n==1)
            s=0;
        else if(n>d)
            s=(n-d)*d+(d*(d-1))/2;
        else
            s=(n*(n-1))/2;

        cout<<s<<endl;
    }
}
