#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a[5];
    set<long long>s;

    for(i=0;i<4;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    cout<<4-s.size()<<endl;
}
