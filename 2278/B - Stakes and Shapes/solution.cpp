#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x,y,z;
    cin>>x>>y>>z;
 
    int n =x+y+z;
 
    if(x>= y && x>=z)
    {
        for(int i=0 ; i<n ; i++) cout<<'P';
        cout<<endl;
        return;
    }
 
    if(y>=x &&  y>=z)
    {
 
        for(int i=0 ; i<n ; i++) cout<<'R';
        cout<<endl;
        return;
 
    }
 
 
    for(int i=0 ; i<n ; i++) cout<<'S';
        cout<<endl;
        return;
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