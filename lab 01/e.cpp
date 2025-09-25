#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> boris, nursik;
    for (int i = 0, x; i < 5; ++i) { 
        cin >> x; boris.push_back(x); 
    }
    for (int i = 0, x; i < 5; ++i) { 
        cin >> x; nursik.push_back(x); 
        
    }
    int cnt = 0;
    const int LIMIT = 1000000;
    while (!boris.empty() && !nursik.empty() && cnt < LIMIT) {
        int A = boris.front(); boris.pop_front();  
        int B = nursik.front(); nursik.pop_front(); 
        bool borisWins;
        if (A == 0 && B == 9) borisWins = true;
        else if (A == 9 && B == 0) borisWins = false;
        else borisWins = (A > B);
        if (borisWins) {
            boris.push_back(A);
            boris.push_back(B);
        } else {
            nursik.push_back(A);
            nursik.push_back(B);
        }
        ++cnt;
    }
    if (cnt >= LIMIT) {
        cout << "blin nichya";
    } else if (boris.empty()) {
        cout << "Nursik " << cnt;
    } else {
        cout << "Boris " << cnt;
    }
    return 0;
}