#include <iostream>
#include <cmath>
typedef long long unsigned llu;
using namespace std;

int main() {
    llu t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

int root = static_cast<int>(sqrt(n) + 0.5);
if (root * root != n) {
    cout << -1 << '\n';
    continue;
}
        bool found = false;
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j) {
                if ((i + j) * (i + j) == n) {
                    cout << i << ' ' << j << '\n';
                    
                
                    found = true;
                    goto next_case;  
                }
            }
        }

        next_case:
        if (!found)
            cout << -1 << '\n';
    }

    return 0;
}

