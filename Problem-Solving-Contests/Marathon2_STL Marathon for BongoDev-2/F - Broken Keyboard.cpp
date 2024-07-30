#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k,i;
    string s;
    while(cin>>s)
    {
        string s1="",temp;

        deque<string>dq;
        deque<string>::iterator it;


        k=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='[')
            {
                k=1;
                dq.push_front(s1);
                s1="";
            }
            else if(s[i]==']')
            {
                k=0;
                dq.push_front(s1);
                s1="";
            }
            else
            {
                if(k==0)
                {
                    temp=s[i];
                    dq.push_back(temp);
                }
                else
                {
                    s1+=s[i];
                }
            }

        }
        dq.push_front(s1);
        for (it=dq.begin();it!=dq.end(); ++it)
                cout<<*it;

        cout<<endl;
    }
}
