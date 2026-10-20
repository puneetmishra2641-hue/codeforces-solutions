#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
    int start=-1;
    int end=-1;
    for(int i=0;(i+1)<n;i++)
    {
        if(a[i+1]<a[i])
        {
            start=i;
 
            int temp=i;
            while((temp<(n-1)) && (a[temp+1] < a[temp])  )
            {
                temp++;
            }
 
            end=temp;
            break;
        }
    }
 
    if(start==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
 
    reverse(a.begin()+start,a.begin()+end+1);
 
    for(int i=0 ;( i+1)<n;i++)
    {
        if(a[i] > (a[i+1]))
        {
            cout<<"no"<<endl;
            return;
        }
 
    }
 
    cout<<"yes"<<endl;
    cout<<start+1<<" "<<end+1<<endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}