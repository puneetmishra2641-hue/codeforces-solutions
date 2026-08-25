#include<bits/stdc++.h>
using namespace std;
#define int long long
 
bool dfs(int a ,int &b,vector<int>&ans)
{
 
   if(a>b) return false;
   if(a==b) 
   {
      ans.push_back(a);
      return true;
   }
    if(dfs(2*a,b,ans))
    {
        ans.push_back(a);
        return true;
    }
 
    if(dfs((10*a)+1,b,ans))
    {
        ans.push_back(a);
        return true;
    }
 
    return false;
}
 
signed main()
{
    int a,b;
    cin >> a >> b;
 
    vector<int>ans;
 
    if(dfs(a,b,ans))
    {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
 
        reverse(ans.begin(),ans.end());
        for(auto it :ans) cout<<it<<" ";
        cout<<endl;
    }
 
    else cout<<"NO"<<endl;
 
}