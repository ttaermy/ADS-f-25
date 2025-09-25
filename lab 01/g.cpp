#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (int d = 3; 1LL * d * d <= n; d += 2)
        if (n % d == 0) return false;
    return true;
}


bool is_superprime(int n) {
    if (!is_prime(n)) return false; 
    int pos = 0;                     
    for (int x = 2; x <= n; ++x)
        if (is_prime(x)) ++pos;
    return is_prime(pos);            
}

int main() {
  
    int k;        
    cin >> k;

    int cnt = 0;
    int x = 1;
    while (cnt < k) {
        ++x;
        if (is_superprime(x)) ++cnt;
    }
    cout << x;
    return 0;
}