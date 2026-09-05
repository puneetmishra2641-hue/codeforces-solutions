#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    int count=0;
    for(int i=0 ; i< n ;i++)
    {
        cin >> a[i];
        if(a[i]==0) count++;
    } 
 
    if(count==0)
    {
        cout<<"yes"<<endl;
        for(int i=0 ; i<n ;i++) cout<<'a';
        cout<<endl;
        return ;
    }
 
    if(count==1)
    {
        cout<<"no"<<endl;
        return ;
    }
 
    cout<<"yes"<<endl;
 
    bool puneet=false;
 
    for(int i=0 ; i<n ; i++)
    {
        if(puneet==false && a[i]==0) 
        {
            cout<<'a';
            puneet=true;
        }
        else if(a[i]==0) cout<<'b';
        else cout<<'c';
        
    }
    cout<<endl;
    return ;
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