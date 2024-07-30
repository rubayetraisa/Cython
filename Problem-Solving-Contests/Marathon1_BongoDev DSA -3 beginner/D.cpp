#include<bits/stdc++.h>
using namespace std;
long long sum(long long n1)
{
    long long s=0;
    while(n1>0)
    {
        s+=n1%10;
        n1/=10;
    }
    return s;
}
int main()
{
    long long t,n,i,n1,p;

    cin>>t;
    while(t--)
    {
            cin>>n;

            for(i=n; ;i++)
            {

                if(__gcd(i,sum(i))>1)
                    break;

            }
            cout<<i<<endl;

    }
}
