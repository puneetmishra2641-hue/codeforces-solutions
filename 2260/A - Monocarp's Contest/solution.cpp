#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >>n;
    vector<int>a(n);
    int cnt=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
        if(i==0 && a[i]==0) cnt1++;
        if(a[i]==0 && i==n-1) cnt2++;
        if(a[i]==0) cnt++;
    }
 
    if(cnt<2)
    {
        cout<<-1<<endl;
        return;
    }
 
    if(cnt2 == 1 && cnt1==1)
    {
        cout<<0<<endl;
        return;
    }
 
    if(cnt1==1 || cnt2==1)
    {
        cout<<1<<endl;
        return ;
    }
 
    cout<<2<<endl;
 
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