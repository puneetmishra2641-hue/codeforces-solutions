#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int i=0 ; i<n ; i++) cin>>b[i];
 
   set<int>st;
 
   for(int i=0 ; i<n ; i++)
   {
    st.insert(b[i]);
   }
 
 
   if(st.size()==2)
   {
    cout<<"Yes"<<endl;
    return;
   }
 
 
   bool puneet=false;
 
   for(int i=0 ; i<n-1 ; i++)
   {
    if(a[i+1]<a[i]) puneet=true;
   }
 
   if(puneet)
   {
    cout<<"No"<<endl;
    return;
   }
 
 
 
   cout<<"Yes"<<endl;
 
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