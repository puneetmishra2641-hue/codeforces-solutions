#include <bits/stdc++.h>
using namespace std;
 
void dfs(vector<vector<int>>&adj,vector<vector<int>>&ans,int node,int papa,int t,map<pair<int,int>,int>&mp)
{
    if(adj[node].size()==1 && adj[node][0]==papa) return;
 
    int puneet=1;
    for(auto it : adj[node])
    {
        if(it==papa) continue;
        if(puneet==t) puneet++;
        ans[puneet].push_back(mp[{min(node,it),max(node,it)}]);
        dfs(adj,ans,it,node,puneet,mp);
        puneet++;
    }
}
 
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<int> degree(n + 1, 0);
    map<pair<int,int>,int>mp;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
 
       mp[{min(u,v),max(u,v)}]=i;
    }
 
    auto it=max_element(degree.begin(),degree.end());
 
    int maxi=*it;
    int idx=it-degree.begin();
 
    vector<vector<int>>ans(maxi+1);
 
    dfs(adj,ans,idx,0,-1,mp);
 
    cout<<maxi<<endl;
 
    for(int i=1 ;i<=maxi; i++)
    {
        cout<<ans[i].size()<<" ";
        for(auto it:ans[i]) cout<<it<<" ";
        cout<<endl;
    }
 
}