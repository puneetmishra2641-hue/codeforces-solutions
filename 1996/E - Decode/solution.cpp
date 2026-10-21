#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
 
 
void solve() {
    
  
    string s;
    cin>>s;
    int n=s.size();
   vector<int>temp;
   for(int i=0 ; i<n ; i++)
   {
    if(s[i]=='0') temp.push_back(-1);
    else temp.push_back(1);
   }
 
 
   vector<int>prefix_sum(n+1,0);
 
 
   for(int i=0 ; i<n ; i++)
   {
    prefix_sum[i+1]=prefix_sum[i]+temp[i];
   }
   int ans=0;
 
 
  map<int,int>mp;
  mp[0]=1;
 
 
   for(int i=0 ; i<n ; i++)
   {
 
    int curr=prefix_sum[i+1];
 
    if(mp.count(curr)==0)
    {
        mp[curr]=i+2;
        continue;
    }
 
    int temp1=mp[curr];
    ans+=(((n-i)*temp1)%mod);
    ans%=mod;
  mp[curr]+=(i+2);
 
       
   }
 
   cout<<ans<<endl;
   return;
 
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}