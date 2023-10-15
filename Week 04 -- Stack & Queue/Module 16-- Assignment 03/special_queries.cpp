#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<string> qu;

    while (Q--) {
        int cmnd;
        cin >> cmnd;

        if (cmnd == 0) {
            string name;
            cin >> name;
            qu.push(name);
        } else if (cmnd == 1) {
            if (!qu.empty()) {
                cout << qu.front() << endl;
                qu.pop();
            } else {
                cout << "Invalid" << endl;
            }
        } else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}

