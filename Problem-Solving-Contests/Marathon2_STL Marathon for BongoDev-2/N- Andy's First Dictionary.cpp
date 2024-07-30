#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    char c;
    set<string>cs;
    while(cin>>s)
    {
        string result="";
        for(i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                c=(char)tolower(s[i]);
                result+=c;
            }
            else
            {
                if(!result.empty())
                {
                    cs.insert(result);
                }
                result="";
            }
        }
        if(!result.empty())
            cs.insert(result);
    }
    for(auto itr : cs)
    {
        cout<<itr<<endl;
    }
}
