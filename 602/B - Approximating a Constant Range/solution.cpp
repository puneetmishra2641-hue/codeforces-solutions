#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int maxi = 0;
    int start = 0;
    int end = 0;
    unordered_map<int, int> ump;
    ump[a[0]]++;
    end++;
    maxi = 1;
    while (end < n)
    {
        if ((ump.size() == 1 && abs(ump.begin()->first - a[end]) <= 1) || (ump.size() == 2 && ump.count(a[end])))
        {
            ump[a[end]]++;
            end++;
            maxi = max(maxi, end - start);
            continue;
        }
 
        while (ump.size() > 1)
        {
            ump[a[start]]--;
            if (ump[a[start]] == 0)
            {
                ump.erase(a[start]);
            }
            start++;
        }
        if (ump.size() == 1 && abs(ump.begin()->first - a[end]) > 1)
        {
            while (ump.size() != 0)
            {
                ump[a[start]]--;
                if (ump[a[start]] == 0)
                    ump.erase(a[start]);
 
                start++;
            }
        }
 
        maxi = max(maxi, end - start);
    }
 
    cout << maxi << endl;
    return 0;
}