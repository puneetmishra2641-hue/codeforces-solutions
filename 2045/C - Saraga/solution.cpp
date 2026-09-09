#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s ,t;
    cin >> s >> t;
 
 
    int n=s.size();
    int m=t.size();
 
   unordered_map<char,int>ump;
 
    for(int i=1 ; i<n ; i++)
    {
       if(ump.count(s[i])==0)
       {
        ump[s[i]]=i;
       }
    }
 
    int idx=-1;
    int mini=INT_MAX;
 
    for(int i=m-2; i>=0 ; i--)
    {
        char temp=t[i];
        auto it =ump.find(temp);
        if(it!=ump.end())
        {
            int cnt=it->second;
            if((cnt+(m-i)) < mini)
            {
                mini=cnt+(m-i);
                idx=i;
            }
        }
 
    }
 
    if(idx==-1)
    {
        cout<<-1<<endl;
        return ;
    }
 
    char p =t[idx];
 
 
    cout<<s[0];
    for(int i=1 ; i<n ;i++)
    {
        if(s[i]==p) break;
        cout<<s[i];
    }
 
    for(int i=idx ; i<m ; i++)  cout<<t[i];
    cout<<endl;
    
 
}
 
int main()
{
 
    solve();
    return 0;
}