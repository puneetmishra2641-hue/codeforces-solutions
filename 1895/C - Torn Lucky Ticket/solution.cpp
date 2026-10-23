#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<string>a(n);
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
    map<pair<int,int>,int>mp;
 
    for(int i=0 ; i<n ; i++)
    {
        string temp=a[i];
        int sum=0;
        for(auto it:temp)
        {
            sum+=(it-48);
        }
        mp[{temp.size(),sum}]++;
    }
 
    int ans=0;
 
    for(int i=0 ; i<n ; i++)
    {
        int size=a[i].size();
 
        vector<int>prefix_sum(size+1,0);
        for(int j=0 ; j<size;j++)
        {
            prefix_sum[j+1]=prefix_sum[j]+(a[i][j]-48);
        }
 
 
        for(int j=1 ; j<size;j++)
        {
            if((size + j) % 2   !=0) continue;
 
            int first=prefix_sum[(size+j)/2];
            int total=prefix_sum[size];
            total-=first;
 
            total=first-total;
 
            if(j==size) total=first;
 
          
 
            
 
            if(mp.count({j,total}))
            {
                ans+=(mp[{j,total}]);
            }
 
            if(true)
            {
                int ss=prefix_sum[size]-prefix_sum[size-((size+j)/2)];
                int need=prefix_sum[size]-ss;
                need=ss-need;
 
                if(j==size)
                {
                    need=ss;
                }
                if(need < 0 ) continue;
                if(mp.count({j,need}))
                {
                    ans+=mp[{j,need}];
                }
            }
           
 
        }
 
        int ts=prefix_sum[size];
 
        if(mp.count({size,ts}))
        {
            ans+=mp[{size,ts}];
        }
        
 
 
       
    }
 
 
 
    cout<<ans<<endl;
    return ;
 
 
  
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
 
 
    return 0;
}