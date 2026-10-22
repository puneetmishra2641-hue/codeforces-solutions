#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    cin>>a[i];
 
    vector<int>prefix_sum(n+1,0);
 
    for(int i=0 ; i<n;i++)
    {
        prefix_sum[i+1]=prefix_sum[i]+a[i];
    }
 
    vector<int>ps(n,0);
 
   int cnt=0;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==1) cnt++;
        ps[i]=cnt;
    }
 
 
    for(int i=0 ;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
 
        int len=r-l+1;
        int sum=prefix_sum[r+1]-prefix_sum[l];
 
     int count=ps[r];
        if(l!=0)
        {
            count-=ps[l-1];
        }
 
 
       
 
        if(len==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
      
        sum-=(len-count);
 
        len-=(len-count);
 
 
        if(sum >=(2*len))
        {
            cout<<"YES"<<endl;
 
        }
        else  cout<<"NO"<<endl;
 
    }
 
 
 
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