#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
     int n, q;
    cin >> n >> q;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
 
    string s;
    for (int i = 0; i < n; i++)
    {
        char temp;
        cin >> temp;
        s.push_back(temp);
    }
    vector<pair<int, int>> partitions;
 
    int max_val = 0;
    int prev_end = 0;
 
    for (int i = 0; i < n; i++)
    {
 
        max_val = max(max_val, p[i]);
 
        if (max_val == i + 1)
        {
            partitions.push_back({prev_end, i});
            prev_end = i + 1;
        }
    }
 
    set<int> st;
    for (int i = 0; i < partitions.size() - 1; i++)
    {
        st.insert(partitions[i].second);
    }
 
    set<int> st2;
 
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R' && !st.count(i))
        {
            st2.insert(i);
        }
    }
 
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
 
        char current = s[temp - 1];
 
        if (current == 'R')
        {
            s[temp - 1] = 'L';
 
            if (s[temp - 2] == 'L' && st2.count(temp - 2))
            {
                st2.erase(temp - 2);
            }
 
            if (s[temp] == 'R' && !st.count(temp - 1))
            {
                st2.insert(temp - 1);
            }
        }
 
        else
        {
            s[temp - 1] = 'R';
            if (s[temp] == 'R' && st2.count(temp - 1))
            {
                st2.erase(temp - 1);
            }
            if (s[temp - 2] == 'L' && !st.count(temp - 2))
            {
                st2.insert(temp - 2);
            }
        }
 
        if (st2.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
 
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
    solve();
   }
 
    return 0;
}