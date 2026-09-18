#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin >> n ;
    vector<int>a(n);
 
    bool temp1=false,temp2=false;
 
    for(int i=0 ; i<n ; i++) 
    {
        cin >> a[i];
        if(a[i]%2==0)  temp1=true;
        else temp2=true;
    }
 
 
    if(temp1 && temp2)
    {
        sort(a.begin(),a.end());
       
 
        for(auto i:a)  cout<<i<<" ";
        cout<<endl;
        return;
    }
 
 
 
 for(auto i:a)  cout<<i<<" ";
 cout<<endl;
 
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