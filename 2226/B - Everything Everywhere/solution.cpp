#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        int f=a[i];
        int s=a[i+1];
        if(__gcd(f,s)==max(f,s)-min(f,s)) cnt++;
    }
 
    cout<<cnt<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}