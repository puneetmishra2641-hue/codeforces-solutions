#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    vector<int>a(n);
    for(int i=0 ;i<n ; i++)
    {
        cin >> a[i];
    }
 
   set<pair<int,int>>st;
 
    
 
    for(int i=0 ; i<n ; i++)
    {
        int temp=i+1;
        int val=a[i];
 
        st.insert({temp*val,((val+1)*temp)-1});
       
    }
 
   set<int>ans;
   for(int i=0 ;i<n ;i++)
   {
    ans.insert(i);
   }
 
 
 
    for(auto it :st)
    {
        int first=it.first;
        int second=it.second;
 
 
 
       
 
         auto it2=ans.lower_bound(first);
         auto it3=ans.upper_bound(second);
 
         if(it2==ans.end()) continue;
 
        ans.erase(it2,it3);
 
    }
 
    cout<<ans.size()<<endl;
    for(auto i:ans)  cout<<i<<" ";
    cout<<endl;
 
   
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