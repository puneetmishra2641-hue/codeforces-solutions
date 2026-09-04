#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    set<int>st;
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        
    }
   
 
    if(k>2)
    {
        cout<<0<<endl;
        return ;
    }
 
     
   if(k==1)
   {
       sort(a.begin(),a.end());
       int ans=*min_element(a.begin(),a.end());
       for(int i=1 ; i<n ; i++)
       {
        int temp=a[i]-a[i-1];
        ans=min(ans,temp);
       }
 
       cout<<ans<<endl;
       return ;
   }
 
   int ans=*min_element(a.begin(),a.end());
  
 
  for(int i=0 ; i< n  ; i++)
  {
    for(int j= i+1 ; j< n ; j++)
    {
        int temp=abs(a[j]-a[i]);
        ans=min(ans,temp);
        if(st.count(temp))
        {
            cout<<0<<endl;
            return ;
        }
 
        auto p=st.upper_bound(temp);
 
        if(p!=st.end())
        {
            ans=min(ans,abs(temp-*p));
            if(p!=st.begin())
            {
                p--;
                ans=min(ans,abs(temp-*p));
            }
        }
        else{
            p--;
            ans=min(ans,abs(temp-*p));
        }
 
 
    }
  }
 
  cout<<ans<<endl;
 
}
 
signed main()
{
   int t;
   cin >> t;
   while(t--) 
   solve();
 
   return 0;
}