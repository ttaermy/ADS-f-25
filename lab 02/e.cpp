#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n;
    cin >> n;

    stack<string> st;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (st.empty() || st.top() != name) {
            st.push(name);
        }
    }

    cout << "All in all: " << st.size() << "\n";
    cout << "Students:\n";

    while (!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }

    return 0;
}