#include <stack>
#include <iostream>
#include <queue>
using namespace std;

void reverseStack(stack<int>& st) {
    queue<int> tempQueue;

    while (!st.empty()) {
        tempQueue.push(st.top());
        st.pop();
    }

    while (!tempQueue.empty()) {
        st.push(tempQueue.front());
        tempQueue.pop();
    }
}

int main() {
    stack<int> st;

    for (int i = 28; i <= 31; i++) {
        st.push(i);
    }


    reverseStack(st);


    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}

