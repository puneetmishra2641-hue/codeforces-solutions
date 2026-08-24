#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >>n;
 
    vector<int>a(n);
    unordered_map<int,int>ump;
    set<int>st;
    for(int i=0 ; i<=n ;i++) st.insert(i);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >>a[i];
      
    }
 
    vector<int>prefix_mex,suffix_mex;
 
    for(int i=0 ; i<n ; i++)
    {
        if(st.count(a[i]))
        {
            st.erase(a[i]);
        }
 
        prefix_mex.push_back(*st.begin());
    }
 
    st.clear();
    for(int i=0 ; i<=n ;i++) st.insert(i);
 
    for(int i= n-1 ; i>=0 ; i--)
    {
        if(st.count(a[i]))
        {
            st.erase(a[i]);
        }
 
        suffix_mex.push_back(*st.begin());
    }
 
    reverse(suffix_mex.begin(),suffix_mex.end());
 
 
    for(int i=0 ; i<n-1 ; i++)
    {
        if(prefix_mex[i]==suffix_mex[i+1])
        {
            cout<<2<<endl;
            cout<<1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl;
            return;
        }
    }
 
    cout<<-1<<endl;
 
 
    
 
 
}
 
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    return 0;
}