#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string t;
    cin >> t;
 
    int n = t.length();
 
    for (int i = n / 2 + 1; i < n; i++)
    {
        string prefix = t.substr(0, i);
        string suffix = t.substr(n - i);
 
        if (prefix == suffix)
        {
            cout << "YES" << endl;
            cout << prefix << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
 
    return 0;
}