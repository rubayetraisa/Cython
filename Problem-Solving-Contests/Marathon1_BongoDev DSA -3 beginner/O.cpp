#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ro,bo,re,be,t,n,i;
    string s;
    cin>>t;

    while(t--)
    {
        ro=0,re=0,bo=0,be=0;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='R')
                {
                    ro++;
                }
                else if(s[i]=='B')
                    bo++;
            }
            else
            {
               if(s[i]=='R')
                {
                    re++;
                }
                else if(s[i]=='B')
                    be++;
            }
        }
        //cout<<re<<be<<ro<<bo<<endl;
        if((re+be)>=(ro+bo))
        {
            if(re>=be)
            {
                for(i=0; i<n; i++)
                {
                    if(s[i]=='?')
                    {
                        if(i%2!=0)
                        {
                            s[i]='R';
                        }
                        else
                        {
                            s[i]='B';
                        }
                    }
                }
            }
            else
            {

                for(i=0; i<n; i++)
                {
                    if(s[i]=='?')
                    {
                        if(i%2==0)
                        {
                            s[i]='R';
                        }
                        else
                        {
                            s[i]='B';
                        }
                    }
                }


            }
        }
        else
        {
            if(ro>=bo)
            {
                for(i=0; i<n; i++)
                {
                    if(s[i]=='?')
                    {
                        if(i%2!=0)
                        {
                            s[i]='R';
                        }
                        else
                        {
                            s[i]='B';
                        }
                    }
                }
            }
            else
            {

                for(i=0; i<n; i++)
                {
                    if(s[i]=='?')
                    {
                        if(i%2==0)
                        {
                            s[i]='R';
                        }
                        else
                        {
                            s[i]='B';
                        }
                    }
                }


            }
        }
        cout<<s<<endl;
    }
}
