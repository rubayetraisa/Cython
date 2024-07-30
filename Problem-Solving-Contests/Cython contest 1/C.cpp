#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[105],i,e;
    cin>>n;
    e=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
    }
    if(e==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
