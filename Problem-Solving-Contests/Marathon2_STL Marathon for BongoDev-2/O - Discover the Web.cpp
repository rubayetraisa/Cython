#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,j;
    cin>>t;

    for(j=1;j<=t;j++)
    {
        stack<string>bck,fr;
        cout<<"Case "<<j<<":"<<endl;
        string s1="",s2="http://www.lightoj.com/";
        while(1)
        {
            cin>>s1;
            if(s1=="QUIT")
            {
                break;
            }
            if(s1=="FORWARD")
            {
                if(fr.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    bck.push(s2);
                    s2=fr.top();
                    cout<<s2<<endl;
                    fr.pop();
                }
            }
            else if(s1=="BACK")
            {
                if(bck.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    fr.push(s2);
                    s2=bck.top();
                    cout<<s2<<endl;
                    bck.pop();
                }
            }
            else if(s1=="VISIT")
            {
                bck.push(s2);
                cin>>s2;
                cout<<s2<<endl;
                while(!fr.empty())
                    fr.pop();
            }
        }
    }
}
