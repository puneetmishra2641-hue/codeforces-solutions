#include<bits/stdc++.h>
using namespace std;
 
void max_dis(vector<vector<int>>&adj,int &end_point,int temp,int &maxi,int node ,int f)
{
    temp++;
    if(adj[node].size()==1 && adj[node][0]==f)
    {
        if(temp>=maxi)
        {
            end_point=node;
            maxi=temp;
        }
        return;
    }
 
    for(auto it:adj[node])
    {
        if(it==f) continue;
        max_dis(adj,end_point,temp,maxi,it,node);
    }
}
 
bool dfs(vector<vector<int>>&adj,vector<int>&dia,int node,int f,int &end_point2)
{
    if(node==end_point2)
    {
        dia.push_back(node);
        return true;
    }
 
    for(auto it : adj[node])
    {
        if(it==f) continue;
 
        if(dfs(adj,dia,it,node,end_point2))
        {
            dia.push_back(node);
            return true;
        }
    }
 
    return false;
}
 
void dfs2(vector<vector<int>>&adj,vector<int>&max_dis,int node,int val)
{
    max_dis[node]=val;
 
    for(auto it : adj[node])
    {
        if(max_dis[it]!=-1) continue;
        dfs2(adj,max_dis,it,val+1);
    }
}
 
int main()
{
    int n;
    cin >> n;
    vector<vector<int>>adj(n+1);
    for(int i=0 ; i<n-1 ; i++)
    {
        int u ,v;
        cin >> u>>v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
 
    }
 
    int end_point=0;
    int maxi=0;
    max_dis(adj,end_point,0,maxi,1,0);
 
    int end_point2=0;
 
    max_dis(adj,end_point2,0,maxi,end_point,-1);
 
    vector<int>dia;
 
    dfs(adj,dia,end_point,0,end_point2);
 
    vector<int>max_dis(n+1,-1);
 
    for(int i=0 ; i< dia.size(); i++)
    {
        if(i<(dia.size()/2))
        {
            max_dis[dia[i]]=dia.size()-i-1;
        }
        else
             max_dis[dia[i]]=i;
    }
 
    for(int i=1 ; i<=n ;i++)
    {
        if(max_dis[i]!=-1) 
        {
            dfs2(adj,max_dis,i,max_dis[i]);
        }
    }
 
 
    vector<int>puneet;
    for(int i=1 ; i<=n ;i++)
    {
        puneet.push_back(max_dis[i]);
    }
 
    sort(puneet.begin(),puneet.end());
 
    for(int i=1 ; i<=n ;i++)
    {
        auto an=lower_bound(puneet.begin(),puneet.end(),i);
 
        if(an==puneet.end())
        {
            cout<<n<<" ";
            continue;
        }
        int idx=an-puneet.begin();
 
        cout<<idx+1<<" ";
    }
 
    cout<<endl;
    return 0;
 
 
}