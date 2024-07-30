#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,m,n,n1,m1,i,n2,m2;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;

        if(n>m)
        {
            swap(m,n);
        }

        n1=(2*((n-1)/3));
        if((n-1)%3==2)
            n1++;


        m1=(2*(m/3));
        if(m%3==2)
            m1++;



        cout<<"Case ";
        cout<<i<<":"<<endl;

        cout<<"Odd = "<<m1-n1<<endl;
        cout<<"Even = "<<(m-n+1)-(m1-n1)<<endl;

    }
}
