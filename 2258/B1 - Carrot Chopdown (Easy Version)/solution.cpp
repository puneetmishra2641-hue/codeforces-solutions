#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ump[a[i]]++;
    }
 
    if (ump.size() == 1)
    {
        if ((ump.begin()->first) % 2 == 0)
        {
            cout << (ump.begin()->second) * 2 << endl;
            return;
        }
        cout << (ump.begin()->second) << endl;
        return;
    }
 
    int answer = n;
    
    auto it=ump.end();
    it--;
    int extra=0;
 
    for(int i=1 ; i<=it->first;i++)
    {
        if(ump.count(i*2))
        {
            answer=max(answer,n-extra+ump[i*2]);
        }
        if(ump.count(i))
        {
            extra+=ump[i];
        }
    }
   
 
    cout << answer << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}