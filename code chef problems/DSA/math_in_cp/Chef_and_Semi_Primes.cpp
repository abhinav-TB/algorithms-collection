#include <bits/stdc++.h>
using namespace std;
#include <math.h>
bool isprime(long long int x)
{
    long long int i, c = 0;
    bool f = 0;
    for (i = 1; i <= x && f != 1; i++)
    {
        if (x % i == 0)
        {
            c++;
            if (c > 2)
            {
                f = 1;
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    long long int t, i, j, n, x;
    cin >> t;
    vector<long long int> v;
    for (i = 2; i <= 200; i++)
    {
        if (isprime(i))
        {
            v.push_back(i);
        }
    }
    unordered_map<long long int, long long int> m;
    n = v.size();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            m[v[i] * v[j]]++;
        }
    }
    while (t--)
    {
        cin >> n;
        bool f = 0;
        for (auto k : m)
        {
            x = n - k.first;
            if (m.find(x) != m.end())
            {
                f = 1;
                //cout<<x<<" "<<k.first<<" ";
                break;
            }
        }
        if (f == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
