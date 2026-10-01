#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<4*n;i++){
        if(i/n==2){
            cout<<(i%n-1+n)%n+1<<" ";
        }else{
            cout<<i%n+1<<" ";
        }
    }
    cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}