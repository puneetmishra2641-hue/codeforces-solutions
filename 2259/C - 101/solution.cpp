#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    vector<int>a(n);
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
    }
 
    bool a1 =false;
    int temp=-1;
 
    for(int i=0 ; i< n ; i++)
    {
        if(a1==false && a[i]==-1)
        {
            a1=true;
            temp=i;
        }
 
        if(a[i]==1) a1=true;
    }
 
    int temp2=-1;
    a1=false;
 
    for(int i=n-1 ; i >=0 ; i--)
    {
        if(a1==false && a[i]==-1) 
        {
            a1=true;
            temp2=i;
        }
 
        if(a[i]==1) a1=true;
    }
 
 
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==-1 && (temp==i || temp2==i))
        {
            cout<<1<<" ";
        }
        else if(a[i]==-1) cout<<0<<" ";
        else cout<<a[i]<<" ";
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