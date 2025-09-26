#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> queries(t);
    for (int i = 0; i < t; i++) {
        cin >> queries[i];
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int q : queries) {
        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == q) {
                    cout << i << " " << j << "\n"; 
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}