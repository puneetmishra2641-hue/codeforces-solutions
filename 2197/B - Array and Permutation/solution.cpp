#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    vector<int>p(n);
   
    for(int i=0 ; i<n ; i++)
    {
        cin >>p[i];
      
    }
 
 
 
     int curr=0;
    for(int i=0;i<n;i++){
        while(curr<n and p[i]!=a[curr]){
            curr++;
        }
        if(curr==n){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
 
 
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