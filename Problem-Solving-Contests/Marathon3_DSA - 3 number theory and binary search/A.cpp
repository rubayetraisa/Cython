#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,c,i,j;

    for(i=0;i<10;i++)
    {
        set<long long>s;
        for(j=0;j<10;j++)
        {
            cin>>x;

            s.insert(x%42);
        }
        cout<<s.size()<<endl;
    }

}
