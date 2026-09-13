#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    vector<int>a,m;
    for(int i=0 ; i<n ; i++)
    {
        int temp;
        cin >> temp;
        if(temp!=(i+1)) a.push_back(temp);
    }
 
   for(int i=1 ; i<a.size();i++)
   {
      if(a[i] >= a[i-1]) 
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