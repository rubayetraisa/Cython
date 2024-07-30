#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i;
    string s;
    char c1;
    cin>>t;

    while(t--)
    {
        cin>>s;

        for(i=0;i<s.size();i+=2)
        {
            c1='a';
            while(s[i]==c1)
            {
                c1++;
            }
            s[i]=c1;
        }

        for(i=1;i<s.size();i+=2)
        {
            c1='z';
            while(s[i]==c1)
            {
                c1--;
            }
            s[i]=c1;
        }
        cout<<s<<endl;
    }
}
