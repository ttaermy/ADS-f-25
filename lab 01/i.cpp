#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    queue<int> QS, QK;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'S') QS.push(i);
        else             QK.push(i);
    }


    while (!QS.empty() && !QK.empty()) {
        int iS = QS.front(); QS.pop();
        int iK = QK.front(); QK.pop();
        if (iS < iK) {
            QS.push(iS + n);    
        } else {
            QK.push(iK + n);    
        }
    }

    if (QK.empty()) cout << "SAKAYANAGI\n";
    else            cout << "KATSURAGI\n";
    return 0;
}