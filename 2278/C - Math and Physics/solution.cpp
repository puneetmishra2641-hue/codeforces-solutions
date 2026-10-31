#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
 
    bool puneet=false;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]!=1) puneet=true;
 
    }
 
    if(puneet==false)
    {
        cout<<-1<<endl;
        return;
    }
 
    if(a[n-1]!=1)
    {
        puneet=false;
        for(int i=0 ; (i+1) <n  ; i++ )
        {
            if(a[i]!=1) puneet=true;
        }
 
        if(puneet==false)
        {
            cout<<accumulate(a.begin(),a.end(),0)-(n-1)<<endl;
            return;
        }
    }
 
 
    if(a[0]!=1)
    {
        puneet=false;
        for(int i=1 ; i<n  ; i++ )
        {
            if(a[i]!=1) puneet=true;
        }
 
        if(puneet==false)
        {
            cout<<accumulate(a.begin(),a.end(),0)-(n-1)<<endl;
            return;
        }
    }
 
    if(a[0]!=1  && a[n-1]!=1)
    {
 
 
        puneet=false;
 
 
        for(int i=1 ; (i+1)<n  ; i++ )
        {
            if(a[i]!=1) puneet=true;
        }
 
        if(puneet==false)
        {
            cout<<accumulate(a.begin(),a.end(),0)-(n-1)<<endl;
            return;
        }
 
    }
 
    cout<<accumulate(a.begin(),a.end(),0)-1<<endl;
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