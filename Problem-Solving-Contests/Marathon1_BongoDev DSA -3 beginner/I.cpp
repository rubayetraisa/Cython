#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,r;
    cin>>n>>k;

    r=k/n;

    if(r==1)
        cout<<n<<endl;
    else if(r==2)
    {
        cout<<n-(k%n)<<endl;
    }
    else
        cout<<"0"<<endl;
}
