#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countSeg(const vector<long long>& a, long long L, long long R) {
    if (L > R) return 0;
    auto itR = upper_bound(a.begin(), a.end(), R);
    auto itL = lower_bound(a.begin(), a.end(), L);
    return itR - itL;
}

int main() {
  
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    while (q--) {
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        long long L = max(l1, l2);
        long long R = min(r1, r2);
        long long ans;

        if (L <= R) {
            long long Umin = min(l1, l2);
            long long Umax = max(r1, r2);
            ans = countSeg(a, Umin, Umax);
        } else {
            ans  = countSeg(a, l1, r1);
            ans += countSeg(a, l2, r2);
        }
        cout << ans << '\n';
    }
    return 0;
}