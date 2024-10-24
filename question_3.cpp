#include <iostream>
#include <deque>
using namespace std;

int findFirstNegative(int arr[], int start, int k) {
    deque<int> dq;

    for (int i = start; i < start + k; i++) {
        if (arr[i] < 0) {
            dq.push_back(arr[i]);
        }
    }

    if (!dq.empty()) {
        return dq.front();
    }
    return 0;
}

int main() {
    const int L = 5;
    int arr[L] = {-8, 2, 3, -6, 10};
    const int k = 2;

    for (int i = 0; i <= L - k; i++) {
        cout << findFirstNegative(arr, i, k) << ' ';
    }

    return 0;
}

