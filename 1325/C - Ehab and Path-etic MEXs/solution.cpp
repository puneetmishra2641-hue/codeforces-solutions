#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int>degree(n+1,0);
 
    vector<pair<int,int>>list;
    int temp=0;
 
    for(int i=0 ; i<n-1 ; i++)
    {
        int u,v;
        cin >> u>> v;
        list.push_back({u,v});
        degree[u]++;
        degree[v]++;
        if(degree[u]==3 && temp==0)
        {
            temp=u;
        }
        if(degree[v]==3 && temp==0)
        {
            temp=v;
        }
    }
 
    if(temp==0)
    {
        
        for(int i=0 ; i<n-1 ;i++) cout<<i<<endl;
        return 0;
    }
 
    int one=0;
    int two=3;
 
 
    for(auto it:list)
    {
        if((it.first == temp || it.second==temp) && one<3)
        {
            cout<<one<<endl;
            one++;
            continue;
        }
 
        cout<<two<<endl;
        two++;
    }
 
 
 
}