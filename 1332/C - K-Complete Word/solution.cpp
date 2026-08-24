#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
   int n,k;
   cin >>n>>k;
   string s;
   cin >> s;
   int ans=0;
   
   for(int i=0 ; i<(k/2);i++)
   {
       unordered_map<char,int>ump;
       for(int j=i ; j<n ;j+=k)
       {
           ump[s[j]]++;
       }
       
       for(int j=k-i-1 ;j<n ;j+=k)
       {
           ump[s[j]]++;
       }
       
       int temp=0;
       int sum=0;
       
       for(auto i:ump)
       {
           temp=max(temp,i.second);
           sum+=i.second;
       }
       
       ans+=(sum-temp);
   }
   
   if(k%2!=0)
   {
        unordered_map<char,int>ump;
       for(int i=k/2;i<n ;i+=k)
       {
           ump[s[i]]++;
           
       }
        int temp=0;
       int sum=0;
       
       for(auto i:ump)
       {
           temp=max(temp,i.second);
           sum+=i.second;
       }
       
       ans+=(sum-temp);
   }
   
   cout<<ans<<endl;
    
}
 
signed main() {
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}