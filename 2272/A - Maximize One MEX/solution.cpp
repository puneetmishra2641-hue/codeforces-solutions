#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    int temp=n-k;
 
    set<int>st;
    for(int i=0 ; i<=(temp) ; i++)
    {
        st.insert(a[i]);
    }
 
    int first=-1;
    int second=-1;
    int val=0;
 
    bool puneet=true;
 
    for(int i=0 ; i<n ; i++)
    {
 
        if((st.count(i)==0)  && puneet)
        {
            first=i;
            puneet=false;
            break;
        }
 
       
 
    }
 
     if(first >(n-k)  || (first==-1))
    {
        cout<<-1<<endl;
        return;
    }
 
    for(int i=0 ; i<n ; i++)
    {
 
        if(a[i] > temp)
        {
 
            second=i;
            break;
 
 
        }
 
    }
 
   
 
    for(int i= n-k ; i<n ; i++)
    {
        if(a[i]==first)
        {
            cout<<second+1<<" "<<i+1<<endl;
            return;
        }
    }
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