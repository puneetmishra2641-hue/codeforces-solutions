#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
for(int i=0 ; i<n;i++) cin>>a[i]>>b[i];
 
 
    int ans=0;
 
    int start=0;
    int end=n;
 
    while(start<=end)
    {
        int mid=start+(end-start)/2;
 
        int puneet=1;
 
        for(int i=0 ; i<n ; i++)
        {
 
            if((a[i]>=(mid-puneet))  && (b[i]>=(puneet-1))) puneet++;
 
        }
 
 
        puneet--;
 
        if(puneet<mid)
        {
            end=mid-1;
            continue;
        }
 
        ans=mid;
        start=mid+1;
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