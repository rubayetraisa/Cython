#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100],i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==i+1)
                c++;
        }
        if(c==n)
            cout<<"0"<<endl;
        else if(a[0]==1||a[n-1]==n)
            cout<<"1"<<endl;
        else if(a[0]==n&&a[n-1]==1)
            cout<<"3"<<endl;
        else
            cout<<"2"<<endl;
    }
}
