#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,c,m,i,j,l,a_len,b_len;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m=0;
        a_len=a.size();
        b_len=b.size();

        for(l=1;l<=min(a_len,b_len);l++)
        {
            for(i=0;i+l<=a_len;i++)
            {
                for(j=0;j+l<=b_len;j++)
                {
                    if(a.substr(i,l)==b.substr(j,l))
                    {
                        m=max(m,l);
                    }
                }
            }
        }
        cout<<a.size()+b.size()-m*2<<endl;
    }
}
