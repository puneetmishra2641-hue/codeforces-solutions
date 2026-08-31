#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve(){
 
    int n,k ;
    cin >> n >> k;
 
    vector<int>a(n);
    set<int>st;
    unordered_map<int,int>ump;
 
    for(int i=0 ; i<=n ; i++) st.insert(i);
    for(int i=0 ; i< n ; i++) 
    {
        cin >> a[i];
        ump[a[i]]++;
        if(st.count(a[i])) st.erase(a[i]);
    }
 
    sort(a.begin(),a.end());
    int mex=*st.begin();
 
    if(k>1)
    {
        
        int temp=-1;
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]<mex && ump[a[i]] > 1)
            {
                temp=a[i];
                break;
            }
        }
 
        if(temp!=-1)
        {
           if(k%2==0)
           {
               int sum=0;
            for(int i=0 ; i< n ; i++)
            {
                if(a[i]<temp) sum+=a[i];
                else sum+=temp;
            }
            cout<<sum<<endl;
            return;
           }
 
            int sum=0;
            for(int i=0 ; i< n ; i++)
            {
                if(a[i]<temp) sum+=a[i];
                else sum+=(temp+1);
            }
            cout<<sum<<endl;
            return;
 
 
        }
       
       int cnt=0;
       for(int i=0 ; i< n ;i++)
       {
        if(a[i]>mex) cnt++;
       }
 
       if(cnt==1 || k%2!=0)
       {
          int sum=0;
          for(int i=0 ; i< n ; i++)
          {
            sum+=min(a[i],mex);
          }
 
          cout<<sum<<endl;
          return;
       }
        int sum=0;
          for(int i=0 ; i< n ; i++)
          {
            if(a[i]<mex) sum+=a[i];
            else sum+=(mex+1);
          }
 
          cout<<sum<<endl;
          return;
 
        
    }
 
    for(int i=0 ; i<n ; i++)
    {
        if((a[i]<mex && ump[a[i]]>1)|| (a[i]>mex)) a[i]=mex;     
    }
 
    int puneet=0;
    for(auto it :a) puneet+=it;
    cout<<puneet<<endl;
 
}
 
signed main()
{
    int t;
    cin >> t;
    while(t--) 
      solve();
 
      return 0;
}