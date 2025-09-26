#include <bits/stdc++.h>
using namespace std;

bool canDivide(vector<long long>& a, int k, long long limit) {
    long long sum = 0;
    int blocks = 1; 
    for (long long x : a) {
        if (sum + x > limit) { 
            blocks++;        
            sum = x;
        } else {
            sum += x;
        }
    }
    return blocks <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long lo = *max_element(a.begin(), a.end()); 
    long long hi = accumulate(a.begin(), a.end(), 0LL);
    long long ans = hi;

    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (canDivide(a, k, mid)) {
            ans = mid;
            hi = mid - 1; 
        } else {
            lo = mid + 1; 
        }
    }

    cout << ans << "\n";
    return 0;
}