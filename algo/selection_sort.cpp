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
void solve()
{
    freopen("../input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    for (int i = 0; i < n; ++i) 
    {
        int pos = i; 
        int mi = a[i]; 
        for (int j = i + 1; j < n; ++j) if (mi > a[j]) {
            mi = a[j]; 
            pos = j; 
        }
        swap(a[i], a[pos]); 
    }
    // for (auto x : a) cout << x << ' '; 
}
signed main()
{
    fast;
    solve(); 

}
