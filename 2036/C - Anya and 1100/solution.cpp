#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
 
    int n = s.size();
 
    unordered_map<int, string> ump;
    set<int>st;
 
    for (int i = 0; i < n; i++)
    {
        string temp;
        for (int j = i; (j < (i + 4)) && j < n; j++)
        {
            temp.push_back(s[j]);
        }
 
        ump[i] = temp;
        if(temp=="1100") st.insert(i);
    }
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int i,v;
        cin >> i >> v;
 
        if (s.size() < 4)
        {
            cout << "NO" << endl;
            continue;
        }
 
        int start=0;
        s[i-1]=char(v+48);
        if(i-4>=0 ) start=i-4;
 
       
        for(int j= start ; j<i ; j++)
        {
             string puneet;
            for(int k=j ; k< n && k<j+4 ; k++)
            {
                puneet.push_back(s[k]);
            }
 
            ump[j]=puneet;
            if(puneet=="1100")
            {
                st.insert(j);
            }
            else 
            {
                if(st.count(j)) st.erase(j);
            }
        }
 
        if(st.empty())
        {
            cout<<"NO"<<endl;
            continue;
        }
 
        else cout<<"YES"<<endl;
 
    }
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