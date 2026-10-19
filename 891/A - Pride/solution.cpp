#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ;i++) cin>>a[i];
 
    int cnt2=0;
 
 
    int m=a[0];
    for(int i=0 ; i<n;i++)
    {
        if(a[i]==1) cnt2++;
        m=__gcd(m,a[i]);
    }
 
    if(cnt2!=0)
    {
        cout<<n-cnt2<<endl;
        return ;
    }
 
    if(m!=1)
    {
        cout<<-1<<endl;
        return;
    }
 
   int ans=n;
   for(int i=0 ; i<n;i++)
   {
     int temp=a[i];
     bool puneet =false;
     int cnt=0;
     for(int j=i;j<n;j++)
     {
        cnt++;
        temp=__gcd(temp,a[j]);
 
        if(temp==1)
        {
            puneet=true;
            break;
        }
 
     }
 
     if(puneet)
     {
        ans=min(ans,cnt);
     }
   }
 
 
   cout<<ans-2+n<<endl;
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
    return 0;
}