#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> history;
    string firstPage;
    cout << "Enter first page: ";
    cin >> firstPage;
    history.push_back(firstPage);
    int q;
    cout << "Enter number of operations: ";
    cin >> q;
    while(q--) {
        string operation;
        cout << "Enter operation (visit/back): ";
        cin >> operation;
        if(operation == "visit") {
            string page;
            cout << "Enter page: ";
            cin >> page;
            history.push_back(page);
            cout << "Current Page: " << history.back() << endl;
        }
        else if(operation == "back") {
            if(history.size() == 1) {
                cout << "Cannot go back. No history left." << endl;
                cout << "Current Page: " << history.back() << endl;
            }
            else {
                history.pop_back();
                cout << "Current Page: " << history.back() << endl;
            }
        }
        else {
            cout << "Invalid operation" << endl;
        }
    }
    return 0;
}