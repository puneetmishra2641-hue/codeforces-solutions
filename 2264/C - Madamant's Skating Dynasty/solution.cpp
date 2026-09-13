#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int mod=998244353;
 
 
 
int power(int a, int b, int mod) {
   int ans = 1;
    a %= mod;
    while (b> 0) {
        if (b%2 == 1) ans = (ans* a) % mod;
        a= (a*a) % mod;
        b /= 2;
    }
    return ans;
}
 
void solve() {
    
    int n;
    cin >> n  ;
    vector<int>a(n);
 
    for(int i=0 ; i<n ;i++)
    {
        cin >> a[i];
    }
 
    if(n==1)
    {
        cout<<0<<endl;
        return ;
    }
 
    sort(a.begin() , a.end());
 
    int temp1=1;
    for(int i=1 ; i< n ; i++)
    {
        temp1=((temp1%mod)*(i%mod))%mod;
    }
 
    vector<int>extra(n+1,0);
 
    for(int i=0 ; i<n ;i++)
    {
        int curr=(temp1 * power(n-i-1,mod-2,mod))%mod;
 
        extra[i+1]=extra[i]+curr;
        
    }
 
 
    int ans=0;
 
 
    for(int i=1 ; i<n ; i++)
    {
        int diff=a[i]-a[i-1];
 
       int val=((((diff%mod)*(extra[i]%mod))%mod)*((n-i)%mod))%mod;
 
        ans=(ans+(val%mod))%mod;
 
 
 
 
    }
 
    cout<<ans<<endl;
 
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