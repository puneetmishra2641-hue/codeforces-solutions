#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void dfs(vector<int>&ans,map<int,pair<int,int>>&mp,int node ,int z)
{
    ans.push_back(node);
 
    if(mp[node].second==0 && z!=0) return;
 
 
 
    if(mp[node].first!=z && mp[node].first!=0) 
    {
        dfs(ans,mp,mp[node].first,node);
    }
    else  if(mp[node].second!=0) dfs(ans,mp,mp[node].second,node);
    else return;
}
 
signed main()
{
    int n;
    cin >> n;
 
    map<int,pair<int,int>>mp;
 
    for(int i=0 ; i< n ;i++)
    {
        int a, b;
        cin >> a>>b;
 
        if(mp.count(a))
        {
            mp[a].second=b;
        }
        else{
            mp[a]={b,0};
        }
         if(mp.count(b))
        {
            mp[b].second=a;
        }
        else{
            mp[b]={a,0};
        }
    }
 
    int temp=0;
    for(auto it :mp)
    {
        if(it.second.second==0)
        {
             temp=it.first;
             break;
        }
       
    }
 
    vector<int>ans;
    dfs(ans,mp,temp,0);
 
    for(auto it : ans) cout<<it<<" ";
    cout<<endl;
 
}