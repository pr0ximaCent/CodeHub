#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fpr(i, n) for (int i = 0; i < n; i++)
#define fors(i, s) for (i = 0; s[i] != '\0'; i++)
#define w(t) while (t--)
#define forv(i, v) for (i = 0; i < v.size(); ++i)
#define vect vector<int> v
#define srt sort(v.begin(), v.end())
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'

int solve(vector<int> &v, int val)
{
    int cnt=0;

    for (auto i : v)
    {
        
        if (i == val)
        {
            cnt++;
        }
       
       
    }
    return v.size()-cnt;
}

int32_t main()
{
    FastIO;
    int n;
    cin >> n;
    vect(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;

    cout << solve(v, val);

    return 0;
}
