#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    cout<<a[0]<<" ";
    int ans=a[0];
 
 
    
vector<int>prefix_sum(n+1,0);
        for(int i=0 ; i<n ; i++)
        {
            prefix_sum[i+1]=prefix_sum[i]+a[i];
        }       
 
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]>=ans)
        {
            cout<<ans<<" ";
            continue;
        }
 
        int start=a[i];
        int end=ans; 
        int temp=start;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int extra=mid-a[i];
 
            int ps=prefix_sum[i];
 
            int ex=ps-mid*i;
 
            if(ex <extra)
            {
                end=mid-1;
                continue;
            }
 
            temp=mid;
            start=mid+1;
 
        }
 
        cout<<temp<<" ";
        ans=temp;
    }
    cout<<endl;
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