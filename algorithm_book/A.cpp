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
    vector<int>a(n);
    int MAX = -1;
    int id = -1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(chmax(MAX, a[i])){
            id = i;
        }
    }
    int sec_MAX = -1;
    for(int i=0;i<n;i++){
        if(i == id)continue;
        chmax(sec_MAX, a[i]);
    }
    cout << sec_MAX << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);

    solve();

    return 0;
}