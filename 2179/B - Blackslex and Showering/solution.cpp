#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
 
    int sum=0;
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
     
    }
 
    for(int i=1 ; i<n ;i++)
    {
        sum+=abs(a[i]-a[i-1]);
    }
 
    int maxi=0;
    for(int i=1 ; i<n-1 ; i++)
    {
        int temp=abs(a[i]-a[i-1])+abs(a[i+1]-a[i]);
        int temp2=abs(a[i+1]-a[i-1]);
        maxi=max(maxi,temp-temp2);
    }
 
    maxi=max(maxi,abs(a[0]-a[1]));
    maxi=max(maxi,abs(a[n-1]-a[n-2]));
 
    cout<<sum-maxi<<endl;
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