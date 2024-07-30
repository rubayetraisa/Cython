#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,c,i;
    double p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n-1;
        c=0;
        while(k>0)
        {
            k/=2;
            c++;
        }
        p=pow(2,c-1);
        n--;
        while(n>=p)
        {
            cout<<n<<" ";
            n--;
        }
        for(i=0;i<p;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
