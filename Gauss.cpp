// #define TASK "find-lksh"


// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse4.2,avx")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC optimize("unroll-all-loops")

#include<bits/stdc++.h>

#include "matrix.h"
#include "rational.h"

// #include <ext/rope>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>

// using namespace __gnu_cxx;`
// using namespace __gnu_pbds;
using namespace std;

// template<class K>
// using ordered_set = tree<K, null_type, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

// template<class K, class T>
// using ordered_map = tree<K, T, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937 rnd((int)chrono::high_resolution_clock::now().time_since_epoch().count());

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define pb push_back
#define pii pair<int, char>
#define len(x) (long long)x.size()
#define int long long
#define uint unsigned long long
    
typedef long long ll;
typedef long double ld;

const long long INF = (int)numeric_limits<int>::max() >> 1;
const long long MAXN = (long long)1e6 + 10;
const long long MOD = (long long)1e9 + 13;
const long double EPS = (long double)1e-12;

// char _buf_[(int)2e8];
// size_t _p_ = 0;

// inline void *operator new(size_t _n_) {
//    _p_ += _n_; 
//    return _buf_ + _p_ - _n_;
// }
// inline void operator delete(void*) {};

ll power(ll x, ll n, ll mod = 1e9 + 7) {
    if (n == 0) return 1ll;
    if (n & 1ll) return power(x, n - 1ll, mod) * x % mod;
    ll tmp = power(x, n >> 1ll, mod);
    return (tmp * tmp) % mod;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd (b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

template<typename A, typename B>
bool cmax(A &a, const B &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<typename A, typename B>
bool cmin(A &a, const B &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

signed main() {
#ifndef LOCAL
    #ifdef TASK
    freopen(TASK".in", "r", stdin);
    freopen(TASK".out", "w", stdout);
#endif
#endif
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // == SOLUTION == //
    cout << "n m\n";
    cout << "Matrix(n * m)\n" << endl;
    int n, m;
    cin >> n >> m;
    vector<vector<Rational>> a(n);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            int x;
            cin >> x;
            a[i].pb(x);
        }
    }
    Matrix<Rational> M(a);
    cout << M << "\n\n";
    M.makeGauss();
}



