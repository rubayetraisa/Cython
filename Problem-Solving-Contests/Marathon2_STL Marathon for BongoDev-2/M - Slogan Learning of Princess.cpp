#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,q,j;
    cin>>n;
    cin.ignore();
    string s1,s2,s;
    map<string,string>mp;

    for(i=0;i<n;i++)
    {
        getline(cin>>ws,s1);
        getline(cin>>ws,s2);

        mp[s1]=s2;
    }
    cin>>q;
    cin.ignore();
    for(j=0;j<q;j++)
    {
        getline(cin>>ws,s);
        cout<<mp[s]<<endl;
    }
}
