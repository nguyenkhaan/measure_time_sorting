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
    for (int i = 1; i < n; ++i) 
    {
        int k = a[i]; 
        int j = i - 1; 
        while (j >= 0 && a[j] > k) {
            a[j + 1] = a[j]; 
            --j; 
        } 
        a[j + 1] = k; 
    }
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