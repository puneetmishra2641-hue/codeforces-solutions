#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n);
 
   
 
    map<int,int>mp,mp3;
    map<pair<int,int>,int>mp2;
    vector<int>an;
   
    int x=LLONG_MAX;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
 
         if((a[i]==b[i]) && (b[i]==c[i]))
        {
           
           int tt=a[i]+b[i]+c[i];
           x=min(x,tt);
            
        }
 
        if((a[i]<= b[i])  && (b[i]<=c[i]))
        {
 
            mp[a[i]+b[i]+c[i]]++;
            
            mp3[a[i]+b[i]+c[i]]++;
 
            mp2[{a[i]+b[i]+c[i],mp[a[i]+b[i]+c[i]]}]=min(b[i]-a[i]+1,c[i]-b[i]+1);
 
 
 
        }
 
        an.push_back(a[i]+b[i]+c[i]);
 
       
 
 
      
    }
 
    
 
    sort(an.begin(),an.end());
 
    for(int i=0 ; i<n-1;i++)
    {
        int gap=an[i+1]-an[i];
        gap*=(i+1);
 
        if(mp3.count(an[i]))
        {
            int temp=mp2[{an[i],mp3[an[i]]}];
            mp3[an[i]]--;
            if(mp3[an[i]]==0) mp3.erase(an[i]);
 
          
 
            
            k-=(temp*2);
 
            if(k<=0)
            {
                cout<<min(an[i],x)<<endl;
                return;
            }
 
           if(k<gap)
           {
              cout<<min(an[i]+(k/(i+1)),x)<<endl;
              return;
           }
 
           k-=gap;
           continue;
 
        }
 
 
 
         if(k<=0)
            {
                cout<<min(an[i],x)<<endl;
                return;
            }
 
           if(k<gap)
           {
              cout<<min(an[i]+(k/(i+1)),x)<<endl;
              return;
           }
 
           k-=gap;
           continue;
 
    }
 
 
    if(mp3.count(an[n-1]))
    {
         int temp=mp2[{an[n-1],mp3[an[n-1]]}];
         k-=(temp*2);
 
    }
 
    if(k<0)
    {
         cout<<min(an[n-1],x)<<endl;
         return;
 
    }
 
 
    cout<<min(an[n-1]+(k/n),x)<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}