#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,s,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;

        m=ceil(n/2.0);

        k=n-m+1;
        //cout<<m<<" "<<k<<endl;
        cout<<s/k<<endl;
    }
}
