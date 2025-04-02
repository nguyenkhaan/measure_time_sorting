#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define An UwU
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
#define console(a) cout<<a<<endl
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
void merge(vector<int> &a, int l, int m, int r) 
{
    vector<int> b; 
    int i = l, j = m + 1; 
    while (i <= m && j <= r) 
    {
        if (a[i] <= a[j]) b.push_back(a[i++]); 
        else b.push_back(a[j++]); 
    } 
    while (i <= m) b.push_back(a[i++]); 
    while (j <= r) b.push_back(a[j++]); 
    for (int t = 0; t < b.size(); ++t) a[t + l] = b[t]; 
}
void merge_sort(vector<int> &a, int n, int l = -1, int r = -1) 
{
    if (l == -1 && r == -1) {
        l = 0; 
        r = n - 1; 
    } 
    if (l < r) 
    {
        int m = (l + r) / 2; 
        merge_sort(a, n, l, m); 
        merge_sort(a, n, m + 1, r); 
        merge(a, l, m, r); 
    }
}
void solve()
{
    freopen("../input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    merge_sort(a, n); 
}
signed main()
{
    fast;
    solve(); 
}
/*   /\_/\
*   (= ._.)
*   / >  \>
*/