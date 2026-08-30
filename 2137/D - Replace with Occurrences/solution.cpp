#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int>b(n);
    unordered_map<int,int>ump,ump2;;
    for(int i=0 ; i< n ; i++)
    {
        cin >> b[i];
        ump[b[i]]++;
    }
 
    for(auto it : ump)
    {
        int first=it.first;
        int second=it.second;
 
        if(second%first !=0)
        {
            cout<<-1<<endl;
            return;
        }
    }
 
    int temp=1;
    
    for(int i=0 ; i < n ; i++)
    {
        int temp2=b[i];
        if(ump2.count(b[i]))
        {
            int x=ump2[b[i]];
            if(ump[b[i]]%b[i]==0)
            {
                x=temp;
                temp++;
                ump2[b[i]]=x;
                cout<<x<<" ";
                ump[b[i]]--;
                continue;
            }
 
            cout<<x<<" ";
            ump[b[i]]--;
            continue;
 
        }
   ump2[b[i]]=temp;
   temp++;
   cout<<ump2[b[i]]<<" ";
   ump[b[i]]--;
 
    }
 
 
    cout<<endl;
    return ;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}