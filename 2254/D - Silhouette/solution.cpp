#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    map<int, int> mp,mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
 
        mp[b[i]]++;
    }
  
    auto it =mp.begin();
    if(it->first !=0)
    {
        cout<<-1<<endl;
        return ;
    }
 
    if(mp.size()==1)
    {
        for(int i=0 ; i<n ; i++) cout<<1<<" ";
        cout<<endl;
        return ;
    }
 
    int pcnt=it->second;
    int total=0;
    int pnum=0;
    it++;
    int x2=-1;
 
    for(auto p=it ; p!=mp.end() ;p++)
    {
        int num=p->first;
 
        if(num <= total )
        {
            cout<<-1<<endl;
            return ;
        }
        if((num-total) % pcnt !=0)
        {
            cout<<-1<<endl;
            return ;
        }
 
        int temp=(num-total)/pcnt;
        if(temp <= x2) 
        {
            cout<<-1<<endl;
            return ;
        }
 
 
       
        mp2[pnum]=temp;
        total+=(pcnt*temp);
        pnum=num;
        pcnt=p->second;
        x2=temp;
 
        auto x=p;
        if(++x ==mp.end())
        {
            mp2[num]=temp+1;          
        }
    }
 
   
 
for(int i=0 ; i<n ; i++)
{
    cout<<mp2[b[i]]<<" ";
}
 
cout<<endl;
 
 
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}