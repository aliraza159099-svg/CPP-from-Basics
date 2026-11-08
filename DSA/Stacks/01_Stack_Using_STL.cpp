#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Declaration: stack<dataType> name;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30); // 30 is now at the top
    cout << "Current stack size: " << s.size() << endl; // Outputs 3
    cout << "Top element: " << s.top() << endl; // Outputs 30
    s.pop(); 
    cout << "Top element after pop: " << s.top() << endl; // Outputs 20
    cout << "Remaining elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
