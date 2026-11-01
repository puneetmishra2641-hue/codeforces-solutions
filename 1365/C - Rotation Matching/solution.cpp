#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n ;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++)  cin>>a[i];
    for(int i=0 ; i<n ; i++)  cin>>b[i];
 
    map<int,int>mp1,mp2,mp3,mp4;
 
    for(int i=0 ; i<n ; i++)
    {
        mp1[a[i]]=i;
        mp2[b[i]]=i;
    }
 
    for(int i=1 ; i<=n ; i++)
    {
       
        if(mp1[i] >=mp2[i])
 
        {
            mp3[mp1[i]-mp2[i]]++;
            mp4[n-(mp1[i]-mp2[i])]++;
            continue;
        }
 
        mp3[n-(mp2[i]-mp1[i])]++;
        mp4[mp2[i]-mp1[i]]++;
 
        
 
    }
 
    int maxi=0;
 
    for(auto it:mp3)
    {
        maxi=max(maxi,it.second);
    }
 
     for(auto it:mp4)
    {
        maxi=max(maxi,it.second);
    }
 
 
    cout<<maxi<<endl;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}