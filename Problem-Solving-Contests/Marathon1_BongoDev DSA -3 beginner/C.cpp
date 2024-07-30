#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,k;
    string s,s1;
    char c,m;
    cin>>t;
    while(t--)
    {
        cin>>s;
        k=0;
        s1="";
        m='z';
        for(i=0;i<s.size();i++)
        {
            if(s[i]<m)
            {
                m=s[i];
            }
        }
        cout<<m<<" ";

        for(i=0;i<s.size();i++)
        {
            if(k==0&&s[i]==m)
            {
                k=1;
                continue;
            }
            else
                s1+=s[i];
        }
        cout<<s1<<endl;
    }
}
