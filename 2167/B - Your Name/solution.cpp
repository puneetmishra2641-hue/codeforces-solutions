#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin >> n ;
    string a,b;
    cin >> a >> b ;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
 
    for(int i=0 ; i<n ;i++)
    {
        if(a[i]!=b[i]) 
        {
            cout<<"NO"<<endl;
            return ;
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