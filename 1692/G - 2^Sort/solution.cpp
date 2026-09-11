#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve()
{
    ll n,k;
    cin>>n>>k;
 
    vector<ll> a(n);
 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    ll i=1;
    ll ans=0;
 
    while(i<n)
    {
        ll cnt=0;
 
        while(i<n && a[i]*2>a[i-1])
        {
            cnt++;
            i++;
        }
 
        i++;
 
        if(cnt>=k)
        {
            ans += cnt-k+1;
        }
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}