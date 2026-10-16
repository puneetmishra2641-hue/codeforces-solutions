#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin >> n ;
    string s;
    cin>>s;
 
    set<int>st;
    for(int i=0 ; i<n ;i++)
    {
        if(s[i]=='0') st.insert(i);
    }
 
    vector<char>a(st.size(),'p');
    vector<int>a2(st.begin(),st.end());
 
    if(st.empty())
    {
        cout<<"YES"<<endl;
        return;
    }
 
    for(int i=0 ; i<a2.size();i++)
    {
        if(i==0 && a2[i]!=0)
        {
            a[i]='r';
            
        }
 
        if(i==(a2.size() -1)  &&  a2[i]!=(n-1))
        {
            if(a[i]=='r')
            {
                cout<<"NO"<<endl;
                return;
            }
            a[i]='l';
            
        }
 
        if(i==(a2.size()-1)) continue;
 
 
        if((a2[i+1]-a2[i]) > 2 )
        {
            if(a[i]=='r'  || a[i+1]=='l')
            {
                cout<<"NO"<<endl;
                return;
            }
 
            a[i]='l';
            a[i+1]='r';
        }
    }
 
 
   vector<pair<int,int>>puneet;
 
   for(int i=0 ; i<a2.size();i++)
   {
      if(i==(a2.size()-1)) continue;
 
      int x=i;
 
      while(x!=(a2.size()-1) && ( a2[x+1]-a2[x] ==2))
      {
        x++;
      }
      puneet.push_back({i,x});
      i=x;
   }
 
 
   for(auto it:puneet)
   {
      int first=it.first;
      int second=it.second;
 
      if((second-first)%2==0)
      {
         if((a[first] == 'l'  && a[second]=='r') || (a[first]=='r'  && a[second]=='l'))
         {
            cout<<"NO"<<endl;
            return;
         }
         continue;
      }
 
 
      if((a[first] == 'l'  && a[second]=='l') || (a[first]=='r'  && a[second]=='r'))
         {
            cout<<"NO"<<endl;
            return;
         }
   }
 
    cout<<"YES"<<endl;
    return;
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