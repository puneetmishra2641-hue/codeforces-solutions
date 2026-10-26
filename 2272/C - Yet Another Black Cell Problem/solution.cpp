#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
 
    int n,x;
    cin>>n>>x;
 
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
 
    int start =1;
    int end=1e9;
 
    int ans=1e9;
 
 
    while(start<=end)
    {
        int mid=start+(end-start)/2;
 
        int temp =x;
 
       
 
        int s=0;
 
        bool puneet=true;
 
        while(s<n)
        {
            if(s!= (n-1))
            {
 
                if((a[s+1]-a[s]) <= mid)
                {
                    s+=2;
                    continue;
 
                }
 
                if (s!=0 && (a[s]-a[s-1])<=mid)
                {
                    s++;
                    continue;
                }
 
                 temp--;
 
 
 
                if(temp <0)
                {
                    puneet=false;
                    break;
                }      
 
 
               int temp2=a[s+1]-a[s];
 
               if( ((temp2/mid) <2)  ||( ((temp2/mid)==2)&& (temp2%mid==0)))
               {
                s+=2;
               }
 
               else s++;
 
 
                continue;
 
 
 
            }
 
           else{
 
 
            if(s==0 )
            {
                if(temp >0)
                {
                    s++;
                    continue;
                }
 
                puneet=false;
                break;
            }
 
 
            if((a[s]-a[s-1])<=mid)
            {
                break;
            }
 
            if(temp >0)
            {
                break;
            }
 
            puneet=false;
 
            break;
 
           }
        }
 
        if(puneet)
        {
            ans=mid;
            end=mid-1;
            continue;
        }
 
        start=mid+1;
    }
 
    
    cout<<ans<<endl;
 
 
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