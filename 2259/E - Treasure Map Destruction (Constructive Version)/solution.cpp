#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    set<int>st1,st2;
    for(int i=0 ; i<n ;i++)
    {
        cin >> a[i];
        if(a[i]==0) st1.insert(i);
        if(a[i]==-1) st2.insert(i);
    }
 
      for(int i=0 ; i<n ; i++)
    {
        if(a[i]<=0) continue;  
        int temp=a[i];
 
        int l=max(0, i-temp+1);
        int h=min(n-1, i+temp-1);
        auto puneet=st1.lower_bound(l);
        if(puneet!=st1.end() && *puneet<=h)
        {
            cout<<-1<<endl;
            return;
        }
 
        auto ankita=st2.lower_bound(l);
        while(ankita!=st2.end() && *ankita<=h)
        {
            auto nxt=next(ankita);
            st2.erase(ankita);
            ankita=nxt;
        }
    }
 
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]<=0) continue;
        int temp=a[i];
 
        int left=i-temp, right=i+temp;
 
        bool hail = (left>=0 && st1.count(left));
        bool hair = (right<n && st1.count(right));
        if(hail || hair) continue;   
 
        bool milegal = (left>=0 && st2.count(left));
        bool milegar = (right<n && st2.count(right));
 
        if(milegal)
        {
            st2.erase(left);
            st1.insert(left);
        }
        else if(milegar)
        {
            st2.erase(right);
            st1.insert(right);
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
    }
    if(st1.empty())
    {
        st1.insert(0);
    }
 
    string r(n,'0');
    for(auto idx: st1) r[idx]='1';
    cout<<r<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}