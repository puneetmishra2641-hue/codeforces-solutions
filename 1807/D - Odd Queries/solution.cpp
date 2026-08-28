#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n,q;
    cin >> n >> q;
 
    vector<int>a(n);
    for(int i=0 ; i< n ;i++)
    {
        cin >> a[i];
    }
 
    vector<int>prefix_sum(n+1,0);
    for(int i=0 ; i< n ; i++)
    {
        prefix_sum[i+1]=prefix_sum[i]+a[i];
    }
 
    for(int i=0 ; i< q; i++)
    {
       
 
        int l,r,k;
        cin >> l >> r >>k;
 
        int minus_sum=prefix_sum[r]-prefix_sum[l-1];
 
        int total_sum=prefix_sum[n];
 
        int final=total_sum-minus_sum+(r-l+1)*k;
 
        if(final%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
 
        cout<<"YES"<<endl;
    }
 
}
 
signed main()
{
    int t;
    cin >>t;
    while(t--) solve();
    return 0;
}