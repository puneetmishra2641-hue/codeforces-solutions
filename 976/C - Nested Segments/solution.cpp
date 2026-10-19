#include <bits/stdc++.h>
using namespace std;
#define int long long
 
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
      if (a.first == b.first) {
        return a.second > b.second; 
    }
   
    return a.first < b.first;
}
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    map<pair<int,int>,int>mp;
    int temp1=-1,temp2=-1;
    for(int i=0 ; i<n;i++) 
    {
        cin>>a[i].first>>a[i].second;
        if(mp.count(a[i]))
       {
         temp1=mp[a[i]]+1;
         temp2=i+1;
       }
        mp[a[i]]=i;
    }
 
    if(temp1!=-1)
    {
        cout<<temp1<<" "<<temp2<<endl;
        return;
    }
 
    sort(a.begin(),a.end(),cmp);
 
    for(int i=0 ; i<(n-1) ;i++)
    {
        if((a[i+1].first >= a[i].first) && (a[i+1].second <=a[i].second))
        {
            cout<<mp[a[i+1]]+1<<" "<<mp[a[i]]+1<<endl;
            return;
        }
    }
 
 
    cout<<-1<<" "<<-1<<endl;
 
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}