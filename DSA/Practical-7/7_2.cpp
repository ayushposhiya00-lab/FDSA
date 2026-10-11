
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n, choice, patient;

    cin >> n;

    while (n--) {
        cin >> choice;

        if (choice == 1) {
            cin >> patient;
            q.push(patient);
        }
        else if (choice == 2) {
            if (q.empty()) {
                cout << "Underflow\n";
            }
            else {
                q.pop();
            }
        }

        if (q.empty())
            cout << "Empty\n";
        else
            cout << q.front() << "\n";
    }

    return 0;
}
