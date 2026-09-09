#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    if(s[0] == '0') {
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == '0' && s[i+1] == '0') {
            cout << -1 << endl;
            return;
        }
    }
 
    bool poo=true;;
 
    for(int i=1 ; i<n ; i++)
    {
        if((s[i]=='+' && s[i-1]=='-') || (s[i]=='-' && s[i-1]=='+')) poo=false;
    }
 
    bool poo2=true,poo3=true;
    int cnt=0;
    for(int i=0 ; i<n ;i++)
    {
        if(s[i]=='0')
        {
            if(cnt%2==0) 
            {
                poo3=false;
                break;
            }
 
            cnt=0;
            continue;
        }
        cnt++;
       
    }
 
    if(poo && poo3) 
    {
        cout<<1<<endl;
        return ;
    }
 
    vector<int> pos, neg;
    for(int i = 0; i < n; i++) {
        if(s[i] == '+') pos.push_back(i);
        if(s[i] == '-') neg.push_back(i);
    }
 
    for(int i = 0; i + 1 < (int)pos.size(); i++) {
        int prev = pos[i];
        int next = pos[i+1];
 
        int cnt = 0;
        bool ankita = true;
        
        for(int j = prev + 1; j < next; j++) {
            if(s[j] == '0') {
                ankita = false;
                break;
            }
            cnt++;
        }
 
        if(ankita && cnt == 2) {
            cout << 3 << endl;
            return;
        }
    }
 
    for(int i = 0; i + 1 < (int)neg.size(); i++) {
        int prev = neg[i];
        int next = neg[i+1];
 
        int cnt = 0;
        bool ankita = true;
        
        for(int j = prev + 1; j < next; j++) {
            if(s[j] == '0') {
                ankita = false;
                break;
            }
            cnt++;
        }
 
        if(ankita && cnt == 2) {
            cout << 3 << endl;
            return;
        }
    }
 
    cout << 2 << endl;
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