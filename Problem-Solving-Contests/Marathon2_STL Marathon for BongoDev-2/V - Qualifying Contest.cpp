#include<bits/stdc++.h>
using namespace std;
bool sortbysecond(const pair<string,long long> &a,
			const pair<string,long long> &b)
{

        return a.second>b.second;
}
int main()
{
    long long n,m,t,p;
    string s;
    cin>>n>>m;
    vector< vector<pair<string,long long> >>v(n);

    while(n--)
    {
        cin>>s>>t>>p;
        v[t].push_back(make_pair(s,p));
    }
    for(auto &i:v)
    {
        stable_sort(i.begin(),i.end(),sortbysecond);
    }

    for(int it=0;it<v.size();it++) {
        for(int jt=0; jt<v[it].size(); ++jt) {
           if(v[it].size()==2)
           {
               cout<<v[it][jt].first<<" ";
               jt++;
               cout<<v[it][jt].first<<endl;
               break;
           }
           else
           {
               jt++;
               if(v[it][jt].second==v[it][++jt].second)
               {
                   cout<<"?"<<endl;
                   break;
               }
               else
               {
                   jt--;
                   jt--;
                   cout<<v[it][jt].first<<" ";
                   jt++;
                   cout<<v[it][jt].first<<endl;
                   break;
               }
           }
        }
    }


}
