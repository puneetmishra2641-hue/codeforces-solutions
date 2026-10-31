#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
 
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
    if(n==1)
    {
        cout<<a[0]<<endl;
        return;
    }
 
    int odd=0,even=0;
 
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]<0)
        {
            if(i%2==0)
            {
                even++;
            }
 
            else odd++;
        }
    }
 
    if(even ==odd)
    {
        int ans=0;
 
        for(int i=0 ; i<n ; i++) ans+=abs(a[i]);
 
        cout<<ans<<endl;
        return;
    }
 
    if(even > odd)
    {
        even-=odd;
 
        vector<int>puneet;
 
        for(int i=0 ; i<n ; i++)
        {
            if(i%2!=0)
            {
                if(a[i]>=0)
                puneet.push_back(a[i]);
                continue;
            }
 
            if(a[i] < 0)
            puneet.push_back(abs(a[i]));
        }
 
 
        sort(puneet.begin(),puneet.end());
 
 
 
        int ans2=0;
 
 
        for(int i=0 ; i<even; i++)
        {
            ans2+=puneet[i];
        }
 
 
         int ans=0;
 
        for(int i=0 ; i<n ; i++) ans+=abs(a[i]);
 
        cout<<ans-(2*ans2)<<endl;
        return;
 
 
 
 
 
 
    }
 
 
     odd-=even;
 
        vector<int>puneet;
 
        for(int i=0 ; i<n ; i++)
        {
            if(i%2==0)
            {
                if(a[i]>=0)
                puneet.push_back(a[i]);
                continue;
            }
 
            if(a[i] < 0)
            puneet.push_back(abs(a[i]));
        }
 
 
        sort(puneet.begin(),puneet.end());
 
 
 
        int ans2=0;
 
 
        for(int i=0 ; i<odd; i++)
        {
            ans2+=puneet[i];
        }
 
 
         int ans=0;
 
        for(int i=0 ; i<n ; i++) ans+=abs(a[i]);
 
        cout<<ans-(2*ans2)<<endl;
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