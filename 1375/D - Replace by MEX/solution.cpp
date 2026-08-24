#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> ump;
 
    set<int> st;
    for (int i = 0; i <= n; i++)
        st.insert(i);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ump[a[i]]++;
        if (st.count(a[i]))
        {
            st.erase(a[i]);
        }
    }
 
    set<int> st2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
            st2.insert(i);
    }
    vector<int> ans;
 
    while (!st2.empty() || *st.begin()!=n)
    {
        int mex = *st.begin();
        if (mex != n)
        {
            ans.push_back(mex);
            if (st2.count(mex))
                st2.erase(mex);
            ump[a[mex]]--;
            if (ump[a[mex]] == 0)
            {
                st.insert(a[mex]);
            }
            ump[mex]++;
            st.erase(mex);
            continue;
        }
 
        int temp = *st2.begin();
        ans.push_back(temp);
        ump[a[temp]]--;
        ump[n]++;
        if (ump[a[temp]] == 0)
            st.insert(a[temp]);
        if (st.count(n))
            st.erase(n);
 
            if(st2.count(temp)) st2.erase(temp);
 
            a[temp] = n;
 
 
    }
 
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it+1 << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}