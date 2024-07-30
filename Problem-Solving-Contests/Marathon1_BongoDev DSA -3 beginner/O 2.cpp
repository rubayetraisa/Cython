#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    string s,s1,s2;
    cin>>t;

    while(t--)
    {
        cin>>n>>s;
        s1=s;
        s2=s;

        for(i=0;i<n;i++)
        {
            if(s1[i]=='?')
            {
               if(i%2==0)
               {
                   s1[i]='B';
               }
               else
                    s1[i]='R';
            }
        }
        for(i=0;i<n;i++)
        {
            if(s2[i]=='?')
            {
               if(i%2!=0)
               {
                   s2[i]='B';
               }
               else
                    s2[i]='R';
            }
        }
        long long c1=0,c2=0;

        for(i=0;i<n-1;i++)
        {
            if(s1[i]==s1[i+1])
               c1++;
        }
        for(i=0;i<n-1;i++)
        {
            if(s2[i]==s2[i+1])
               c2++;
        }
        //cout<<s1<<" "<<c1<<endl;
        //cout<<s2<<" "<<c2<<endl;
        if(c1<=c2)
            cout<<s1<<endl;
        else
            cout<<s2<<endl;
    }
}
