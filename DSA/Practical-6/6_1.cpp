#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int stack[n];
    int top = -1;
    int q;
    cout << "Enter number of operations: ";
    cin >> q;
    while(q--) {
        string operation;
        cout << "Enter operation (push/pop): ";
        cin >> operation;
        if(operation == "push") {
            int value;
            cout << "Enter tray value: ";
            cin >> value;
            if(top == n - 1) {
                cout << "Stack Overflow" << endl;
            }
            else {
                stack[++top] = value;
                cout << "Top: " << stack[top] << endl;
            }
        }
        else if(operation == "pop") {
            if(top == -1) {
                cout << "Stack Underflow" << endl;
            }
            else {
                top--;
                if(top == -1)
                    cout << "Stack is Empty" << endl;
                else
                    cout << "Top: " << stack[top] << endl;
            }
        }
        else {
            cout << "Invalid operation" << endl;
        }
    }
    return 0;
}