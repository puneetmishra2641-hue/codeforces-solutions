#include<bits/stdc++.h>
using namespace std;
 
bool dfs(vector<vector<int>>&a,int node,vector<int>&ans ,unordered_set<int>&st)
{
    if(a[node].size()==0)
    {
        if(st.count(node))
        {
            return true;
        }
 
        return false;
    }  
    
    int p=0;
 
    for(int i=0 ; i<a[node].size() ; i++)
    {
        bool temp=dfs(a,a[node][i],ans,st);
        if(temp) ans.push_back(a[node][i]);
        if(temp) p=1;
    }
    if(p==1 && !st.count(node))   ans.pop_back(); 
 
     if(p==1 || st.count(node)) return true;
 
     return false;
}
 
 
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>>a(n+1);
    for(int i=2 ; i<= n ;i++)
    {
        int p;
        cin >> p;
        a[p].push_back(i);
    }
    int m;
    cin >>m;
    unordered_set<int>st;
    for(int i=0 ; i<m ; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
 
    vector<int>ans;
 
   bool temp2= dfs(a,1,ans,st);
 
 
 
   cout<<ans.size()<<" ";
   for(auto i :ans) cout<<i<<" ";
   cout<<endl;
    
 
}
 
int main()
{
    int t;
    cin >> t;
    while(t--) 
    solve();
    return 0;
}