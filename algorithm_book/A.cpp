#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

template<class T>inline bool chmax(T &a, const T &b) { if (b > a) { a = b; return true; } return false; }
template<class T>inline bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

constexpr int INF = 1001001001;
constexpr long long LINF = 1001001001001001001;
constexpr double EPS = 1e-10;
constexpr double PI = M_PI;

void solve() {
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(),a.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]] = i;
    }
    for(int i=0;i<n;i++){
        cout << mp[b[i]] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);

    solve();

    return 0;
}
