#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<string>store;
 
   for(char i='0' ; i<='1' ; i++)
   {
      for(char j='0' ; j<='1' ; j++)
      {
 
        string temp;
        temp.push_back(i);
        temp.push_back(j);
        for(int k=2; k<n ; k++)
        {
            if(temp[k-2]=='0') temp.push_back('1');
            else temp.push_back('0');
        }
        store.push_back(temp);
      }
   }
 
 
   int ans=0;
   for(auto it:store)
   {
      bool m=true;
      for(int i=0 ; i<n ; i++)
      {
        if(it[i]!=s[i]  && s[i]!='?') m=false;
      }
 
      if(m) ans++;
   }
 
   cout<<ans<<endl;
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