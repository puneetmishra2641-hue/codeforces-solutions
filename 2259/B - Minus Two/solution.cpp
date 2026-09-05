#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n;
    cin >> n;
    vector<int>a(n);
      int count1=0 , count2=0, count3=0;
    for(int i=0 ; i< n ;i++)
    {
        cin >> a[i];
 
        if(a[i]%2!=0) 
        {
            count1++;
            continue;
        }
 
        int temp=a[i];
        temp/=2;
        if(temp%2==0) count2++;
        else count3++;
    }
 
    cout<<max(max(count1,count2),count3)<<endl;
 
  
 
 
    
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