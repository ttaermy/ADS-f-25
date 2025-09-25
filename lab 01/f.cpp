#include <iostream>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    int cnt=0;
    int check=0;
    while (cnt!=n){
        check++;
        if (is_prime(check)){
            cnt++;
        }

    }
    cout<<check;
}