#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c = '0';
    bool add = true;
    int ans = 0;
     for(int i = 0; i < n ; i+=2){
        
         if(s[i] != '?' && s[i] != c){add = false; break;}
         if(i+1 < n && s[i+1] != '?' && s[i+1] != c){add = false; break;}
        if(c =='0')c='1';
        else c='0';
 
     }
     if(add)ans++;
 
     c = '1';
    add = true;
    
     for(int i = 0; i < n  ; i+=2){
        
         if(s[i] != '?' && s[i] != c){add = false; break;}
         if(i+1 < n && s[i+1] != '?' && s[i+1] != c){add = false; break;}
        if(c =='0')c='1';
        else c='0';
 
     }
     if(add)ans++;
    if(s[0] == '1' || s[0] =='?'){
 c = '0';
    add = true;
     
     for(int i = 1; i < n  ; i+=2){
        
         if(s[i] != '?' && s[i] != c){add = false; break;}
         if(i+1 < n && s[i+1] != '?' && s[i+1] != c){add = false; break;}
        if(c =='0')c='1';
        else c='0';
 
     }
     if(add)ans++;
    }
    if(s[0] == '0' || s[0] =='?'){
 c = '1';
    add = true;
     
     for(int i = 1; i < n  ; i+=2){
        
         if(s[i] != '?' && s[i] != c){add = false; break;}
         if(i+1 < n && s[i+1] != '?' && s[i+1] != c){add = false; break;}
        if(c =='0')c='1';
        else c='0';
 
     }
     if(add)ans++;
    }
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}