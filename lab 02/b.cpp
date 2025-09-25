#include <iostream>
#include <deque>
using namespace std;

int main() {
    int numberOfWords, shift;
    cin >> numberOfWords >> shift;
    deque<string> sos;
    for(int i = 0; i < numberOfWords; i++){
        string a; cin >> a;
        sos.push_back(a);
    }
    for(int i = 0; i < shift; i++){
        sos.push_back(sos.front());
        sos.pop_front();
    }
    for(int i = 0; i < numberOfWords; i++){
        cout << sos.front() << " ";
        sos.pop_front();
    }
    return 0;
}