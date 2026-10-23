#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '
'
/* const int MOD = 1e9 + 7;
const int MAXN = 1000005;
 
// Below is the Policy-Based Data Structure (PBDS) template for ordered set, multiset, and map.
// Uncomment the block below to use PBDS in your code.
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef tree<int, int, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_map;
 
 
// Precomputes prime flags, lowest prime factors (LPF), and highest prime factors (HPF) up to MAXN.
vector<bool> isprime(MAXN, true);
vector<int> lowprime(MAXN), highprime(MAXN);
 
void sieve() {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < MAXN; i++) {
        lowprime[i] = i;
        highprime[i] = i;
    }
    for (int i = 2; i < MAXN; i++) {
        if (isprime[i]) {
            for (int j = 2 * i; j < MAXN; j += i) {
                isprime[j] = false;
                highprime[j] = i;
                if (lowprime[j] == j) {
                    lowprime[j] = i;
                }
            }
        }
    }
}
 
// Returns a map of prime factors with their frequencies for a given number.
map<int, int> allprime(int n) {
    map<int, int> factors;
    while (n > 1) {
        int p = lowprime[n];
        while (n % p == 0) {
            factors[p]++;
            n /= p;
        }
    }
    return factors;
}
 
// Returns a sorted vector containing all divisors of a given number.
vector<int> divisors(int n) {
    vector<int> div;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    return div;
}
 
// Computes (a^b) modulo MOD efficiently using binary exponentiation.
int power(int a, int b) {
    int res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
 
 */
 
void solve()
{
 
    string s;
 
    cin >> s;
 
    int q;
    cin >> q;
 
    vector<set<int>> store(26);
 
    for (int i = 0; i < s.size(); i++)
    {
 
        store[s[i] - 'a'].insert(i);
    }
 
    for (int i = 0; i < q; i++)
    {
 
        int n;
        cin >> n;
 
        if (n == 1)
        {
            int pos;
            cin >> pos;
            char c;
            cin >> c;
            pos--;
 
            char temp = s[pos];
            s[pos]=c;
            store[temp - 'a'].erase(pos);
            store[c - 'a'].insert(pos);
        }
        else
        {
 
            int l, r;
            cin >> l >> r;
 
            l--;
 
            r--;
 
            int cnt = 0;
 
            for (int i = 0; i < 26; i++)
            {
             
                auto it = store[i].lower_bound(l);
                if (it != store[i].end())
                {
                    int num = *it;
 
                    if (num <= r)
                        cnt++;
                }
            }
 
            cout << cnt << endl ;
        }
    }
 
    return;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}