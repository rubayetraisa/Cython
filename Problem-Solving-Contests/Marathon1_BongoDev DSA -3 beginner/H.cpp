#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m=min(a,b);

        cout<<min((a+b)/4,m)<<endl;
    }
}
