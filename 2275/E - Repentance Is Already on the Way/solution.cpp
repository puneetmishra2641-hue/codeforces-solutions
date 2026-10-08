#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int i=0 ; i<n ; i++) cin>>b[i];
 
 
    int ans1=0,ans2=0;
    vector<int>ps(n+1,0);
    for(int i=0;i<n;i++)
    {
      if(i==0)
      {
       
        continue;
      }
 
      int val=0;
      if(a[i-1]==b[i-1])
      {
        val+=2;
      }
      else val++;
 
      if(a[i]==b[i-1]) val+=2;
      else val++;
 
      ps[i]=ps[i-1]+val;
 
    }
 
    vector<int>ps2(n,0);
 
    for(int i=n-1;i>=0;i--)
    {
        if(i==(n-1)) 
        {
            int val=0;
            if(a[i]==b[i]) val+=2;
            else val++;
 
            ps2[i]=val;
            continue;
        }
 
        int val=0;
 
        if(a[i]==b[i+1]) val+=2;
        else val++;
        if(a[i+1]==b[i]) val+=2;
        else val++;
 
        ps2[i]=ps2[i+1]+val;
    }
 
    int maxi=0;
 
    for(int i=0 ; i<n;i++)
    {
        maxi=max(maxi,ps[i]+ps2[i]);
    }
 
    cout<<maxi<<endl;
 
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