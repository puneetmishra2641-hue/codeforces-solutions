#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int mod=998244353;
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>b[i];
    }
 
  for(int i=0 ; i<n ; i++)
  {
    a[i]*=((i+1)*(n-i));
 
  }
 
  sort(a.begin(),a.end());
  sort(b.rbegin(),b.rend());
 
  int ans=0;
  for(int i=0 ; i<n ; i++)
  {
    ans+=(((a[i]%mod) * ( b[i]% mod))%mod);
    ans%=mod;
 
  }
 
  cout << ans<< endl;
 
 
  
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 solve();
    return 0;
}