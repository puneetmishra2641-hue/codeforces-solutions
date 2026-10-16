#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<vector<int>>a(2,vector<int>(n));
    for(int i=0 ; i<n;i++) cin>>a[0][i];
    for(int i=0 ; i<n;i++) cin>>a[1][i];
 
    int cnt=0;
 
    vector<int>mini1(n),maxi1(n);
    vector<int>mini2(n),maxi2(n);
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0 ; i<n;i++)
    {
        mini=min(mini,a[0][i]);
        maxi=max(maxi,a[0][i]);
 
        mini1[i]=mini;
        maxi1[i]=maxi;
    }
 
    mini=INT_MAX;
    maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        mini=min(mini,a[1][i]);
        mini2[i]=mini;
        maxi=max(maxi,a[1][i]);
        maxi2[i]=max(maxi,a[1][i]);
    }
 
    set<pair<int,int>>st;
 
    for(int i=0 ; i<n;i++)
    {
        int temp=mini1[i];
        temp=min(temp,mini2[i]);
 
        int temp2=maxi1[i];
        temp2=max(temp2,maxi2[i]);
 
        st.insert({temp,temp2});
 
        
    }
 
    vector<pair<int,int>>temp(st.begin(),st.end());
 
 
    sort(temp.rbegin(),temp.rend());
    
    for(int i=0 ; i<temp.size();i++)
    {
        int first=temp[i].first;
        int second=temp[i].second;
 
        if(i==0)
        {
            cnt+=(first*((2*n)-second+1));
            maxi=second;
            continue;
        }
 
        if(second >= (maxi)) continue;
 
        cnt+=(first*(maxi-second));
        maxi=second;
 
 
    }
 
    cout<<cnt<<endl;
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