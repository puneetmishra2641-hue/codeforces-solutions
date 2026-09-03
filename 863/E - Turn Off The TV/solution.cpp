#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
    int n;
    cin >> n;
 
      map<int,int>ump;
 
      vector<pair<int,int>>vp(n);
 
    for (int i = 0; i < n; i++)
    {
       int l,r;
       cin >> l >> r;
       vp[i]={l,r};
 
       ump[l]++;
       ump[r+1]--;
    }
    map<int,int>ps;
    int sum=0;
 
    for(auto it :ump)
    {
        int first=it.first;
        int second=it.second;
        ps[first-1]=sum;
        sum+=second;
        ps[first]=sum;
    }
   
 
    for(int i=0 ; i<n ; i++)
    {
 
        int temp1=vp[i].first;
        int temp2=vp[i].second;
 
       auto ankita=ps.find(temp1);
       auto ankita2=ps.find(temp2);
       ankita2++;
 
       bool puneet=true;
 
       for(auto it=ankita ; it != ankita2; it++)
       {
          if(it->second <=1) puneet=false;
       }
 
       if(puneet)
       {
          cout<<i+1<<endl;
          return 0;
       }
    }
 
    cout<<-1<<endl;
 
   
 
 
 
 
 
 
 
    
 
 
 
 
}