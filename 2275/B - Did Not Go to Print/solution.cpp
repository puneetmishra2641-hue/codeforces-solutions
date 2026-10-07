#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    string s;
    cin>>s;
 
    stack<int>st;
 
    vector<int>ans;
   for(int i=0;i<s.size() ;i++)
   {
 
        if(s[i]=='1') st.push(i+1);
        if(s[i]=='2')
        {
            if(st.size())
            {
                ans.push_back(st.top());
                st.pop();
                continue;
            }
 
            ans.push_back(i+1);
 
        }
 
        if(s[i]=='3')
        {
            ans.push_back(i+1);
        }
 
   }
 
   set<int>st2(ans.begin(),ans.end());
 
   cout<<n-st2.size()<<endl;
 
   for(int i=1 ; i<=n ; i++)
   {
 
      if(st2.count(i)) continue;
 
      cout<<i<<" ";
 
   }
 
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