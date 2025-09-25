#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    stack<char> fora, forb;
    for (char c : a) {
        if (c == '#') {
            if (!fora.empty()) fora.pop();
        } else {
            fora.push(c);
        }
    }
    for (char c : b) {
        if (c == '#') {
            if (!forb.empty()) forb.pop();
        } else {
            forb.push(c);
        }
    }


    bool equal = (fora.size() == forb.size());
    while (equal && !fora.empty()) {
        if (fora.top() != forb.top()) equal = false;
        fora.pop();
        forb.pop();
    }

    cout << (equal ? "Yes" : "No") << '\n';
    return 0;
}