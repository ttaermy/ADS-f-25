#include <bits/stdc++.h>   
using namespace std;

int main() {

    int T;                
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        deque<int> dq;    

        for (int i = N; i >= 1; --i) {
            dq.push_front(i);

            int times = i % (int)dq.size();
            while (times--) {
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
        }

        for (int k = 0; k < (int)dq.size(); ++k) {
            if (k) cout << ' ';
            cout << dq[k];
        }
        cout << '\n';
    }
    return 0;
}