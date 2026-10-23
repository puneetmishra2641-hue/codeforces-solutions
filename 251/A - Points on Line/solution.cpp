#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ,d;
    cin>>n>>d;
    vector<int>a(n);
 
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
    }
 
    int ans=0;
 
    
 
  for(int i=0 ; i<n ; i++)
  {
    if((i+2)>=n) continue;
 
    int val=a[i];
    int req=val+d;
    
    int start=0;
    int end=n-1;
    int idx=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
 
        if(a[mid]>req)
        {
            end=mid-1;
            continue;
        }
 
        if(a[mid]<=req)
        {
            idx=mid;
            start=mid+1;
 
        }
 
 
    }
 
    int num=idx-i;
    num--;
    ans+=(((num+1)*num)/2);
 
  }
 
 
  cout<<ans<<endl;
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
 
 
    return 0;
}