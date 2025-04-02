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
void quick_sort(vector<int> &a, int n, int l = -1, int r = -1) 
{
    if (l == -1 && r == -1) {
        l = 0; 
        r = n - 1; 
    }
    if (l >= r) return; 
    int i = l, j = r; 
    int pivot = a[(l + r) / 2]; 
    while (i < j) 
    {
        while (a[i] < pivot) ++i; 
        while (a[j] > pivot) --j; 
        if (i <= j) 
        {
            swap(a[i] , a[j]); 
            --j; 
            ++i; 
        }
    }
    quick_sort(a, n, i, r); 
    quick_sort(a, n, l, j); 
}
void solve()
{
    freopen("../input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    quick_sort(a, n); 
}
signed main()
{
    fast;
    solve(); 

}
