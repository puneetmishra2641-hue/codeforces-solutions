#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
 
        int total = n*k + n*(n-1)/2;
 
        int lo=1, hi=n, ans=1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int pre = mid*k + mid*(mid-1)/2;
            int suf = total-pre;
            if(pre<=suf){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
 
        int best = LLONG_MAX;
        for(int i=max(1LL,ans-1); i<=min(n,ans+1); i++){
            int pre = i*k + i*(i-1)/2;
            int x = abs(2*pre-total);
            best = min(best,x);
        }
 
        cout<<best<<endl;
    }
}