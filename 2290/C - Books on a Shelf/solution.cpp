#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
 
    ll n ;
    cin>>n;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++)  cin>>a[i];
   map<ll,ll>mp;
   for(auto it:a)
   {
    mp[it]++;
   }
 
   
   int ans=0;
 
   for(auto it:mp)
   {
    if(it.second>=2) ans+=2;
    else ans++;
   }
 
   cout<<ans<<endl;
   sort(a.begin(),a.end());
   for(int i=0 ; i<n ; i+=2) cout<<a[i]<<" ";
   if(n%2!=0) n--;
   for(int i=n-1 ; i>=0 ; i-=2) cout<<a[i]<<" ";
   cout<<endl;    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}