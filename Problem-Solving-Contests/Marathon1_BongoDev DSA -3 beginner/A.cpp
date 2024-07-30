#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[55],i,j,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {

            if(abs(a[i]-a[i+1])>1)
            {
                c=1;
                break;
            }

        }
        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
