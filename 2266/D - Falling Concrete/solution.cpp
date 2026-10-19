#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
    vector<int>temp;
    for(int i=0 ; i<n;i++) 
    {
        cin>>a[i];
 
        temp.push_back(a[i]-i-1);
    }
 
  set<int>st(temp.begin(),temp.end());
 vector<int>temp1(st.begin(),st.end());
 
    int maxi=1;
 
    int start=0;
    int len=1;
 
    for(int i=0 ; (i+1)<temp1.size();i++)
    {
        if(temp1[i+1]==(temp1[i]+1))
        {
            len++;
            continue;
        }
 
        maxi=max(maxi,len);
        len=1;
    }
    maxi=max(maxi,len);
 
    cout<<maxi<<endl;
 
 
 
 
    
   
 
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