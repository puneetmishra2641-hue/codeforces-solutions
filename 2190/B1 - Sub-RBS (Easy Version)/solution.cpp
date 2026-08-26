#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
 
    bool p=false;
    int count=0;
    for(auto it:s)
    {
        if(it==')') 
        {
            p=true;
            continue;
        }
        
        if(p && it=='(') count++;
    }
 
    if(count>=2) cout<<n-2<<endl;
    else cout<<-1<<endl;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}