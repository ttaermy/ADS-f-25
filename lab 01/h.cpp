#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (int d = 3; 1LL * d * d <= n; d += 2)
        if (n % d == 0) return false;
    return true;
}


int main() {
    int k;        
    cin >> k;
    if (is_prime(k)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}