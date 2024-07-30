#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,p1,p2,i,m;
    string s1,s2;
    cin>>t;

    while(t--)
    {
        cin>>s1>>p1;
        cin>>s2>>p2;

        long long n1=s1.size()+p1;
        long long n2=s2.size()+p2;

        if(n1>n2)
            cout<<">"<<endl;
        else if(n1<n2)
            cout<<"<"<<endl;
        else
        {
            m=min(s1.size(),s2.size());
            for(i=0;i<m;i++)
            {
                if(s1[i]-'0'>s2[i]-'0')
                {
                    cout<<">"<<endl;
                    break;
                }
                else if(s1[i]-'0'<s2[i]-'0')
                {
                    cout<<"<"<<endl;
                    break;
                }
            }
            if(i==m)
            {
                if(s1.size()==s2.size())
                    cout<<"="<<endl;
                else if(s1.size()<s2.size())
                {
                    for(;i<s2.size();i++)
                    {
                        if(s2[i]-'0'>0)
                        {
                            cout<<"<"<<endl;
                            break;
                        }

                    }
                    if(i==s2.size())
                        cout<<"="<<endl;
                }
                else if(s1.size()>s2.size())
                {
                    for(;i<s1.size();i++)
                    {
                        if(s1[i]-'0'>0)
                        {
                            cout<<">"<<endl;
                            break;
                        }

                    }
                    if(i==s1.size())
                        cout<<"="<<endl;
                }

            }
        }
    }
}
