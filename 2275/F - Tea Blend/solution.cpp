#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int mod=1e6+7;
 
vector<bool>isprime(mod,true);
vector<int>prime(mod,-1);
 
void sieve()
{
    isprime[0]=false;
    isprime[1]=false;
    prime[0]=1;
    prime[1]=1;
 
    for(int i=0 ; i<mod;i++)
    {
        if(isprime[i]==false) continue;
        prime[i]=i;
 
        for(int j=2*i ; j <mod; j+=i)
        {
            isprime[j]=false;
            prime[j]=i;
        }
    }
}
 
 
map<int,int> nums(int num)
{
   map<int,int>mp;
    int temp=prime[num];
 
    while(num!=1)
    {
        int cnt=0;
        while(num%temp==0)
        {
            num/=temp;
            cnt++;
        }
 
        mp[temp]=cnt;
 
        temp=prime[num];
    }
 
    return mp;
 
}
 
void solve()
{
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n;i++) 
    {
        cin>>a[i];
    }
 
    int cnt=0;
    int ans=0;
 
  set<int>st;
 
 
 
  map<int,int>mp2;
 
  for(int i=0 ; i<n ; i++)
  {
    map<int,int>mp3=nums(a[i]);
 
    int num=1;
 
    for(auto it :mp3)
    {
       int first=it.first;
       int second=it.second;
 
       if(second%2==0) continue;
       num*=first;
        
    }
 
    mp2[num]++;
 
 
  }
 
      
    
  
 
    
 
 
    for(int j=0 ; j<n ; j++)
    {
        map<int,int>temp=nums(a[j]);
 
 
        for(auto it :temp)
        {
            int first=it.first;
            int second=it.second;
            if(st.count(first))
            {
                if(second %2==0) 
                {
                    continue;
                }
                st.erase(first);
                
            }
 
            else{
                if(second%2!=0)
                {
                    st.insert(first);
 
                   
                }
            }
        }
 
        int puneet=1;
 
        if(st.size() >8) continue;
 
        for(auto its:st)
        {
            if((puneet > mod) || (its >mod)) continue;
 
            puneet*=its;
        }
 
       
 
 
        ans+=mp2[puneet];
 
 
 
 
 
    }
 
    cout<<ans<<endl;
 
  
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}