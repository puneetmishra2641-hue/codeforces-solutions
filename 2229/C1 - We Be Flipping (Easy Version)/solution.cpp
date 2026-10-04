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
 
    vector<int>operation;
 
    for(int i=1;i<n;i++)
    {
        if((a[i]<0 && a[i-1]<0)|| (a[i]>0 && a[i-1]>0)) continue;
        operation.push_back(i-1);
    }
    if(a[n-1]>0) operation.push_back(n-1);
 
    reverse(operation.begin(),operation.end());
 
    cout<<operation.size()<<endl;
    for(auto it:operation)
    {
        cout<<it+1<<" ";
    }
 
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