#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ,k;
    cin>>n>>k;
 
    vector<pair<int,int>>vp;
 
    
 
    for(int i=0 ; i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
 
        if(a==b && b==c)
        {
            vp.push_back({a+b+c,LLONG_MAX});
            continue;
        }
 
        if(a<=b && b<=c)
        {
            vp.push_back({a+b+c,2*min(b-a+1,c-b+1)});
        }
 
        else vp.push_back({a+b+c,0});
    }
 
    int start=-10000000000;
    int end=20000000000000000000;
 
    int ans=0;
    sort(vp.begin(),vp.end());
 
    while(start<=end)
    {
        int mid=start+(end-start)/2;
 
        int temp=k;
        bool puneet=true;
        for(int i=0;i<vp.size();i++)
        {
 
            if(vp[i].first >=mid)
            {              
                break;
            }
 
            if(vp[i].second==LLONG_MAX)
            {
                puneet=false;
                break;
            }
 
            int extra=mid-vp[i].first+vp[i].second;
 
            temp-=extra;
            if(temp<0)
            {
                puneet=false;
                break;
            }
 
 
        }
 
        if(puneet)
        {
            ans=mid;
            start=mid+1;
            continue;
        }
 
        end=mid-1;
 
 
 
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