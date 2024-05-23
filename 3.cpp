// reverse an array
#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(c) / sizeof(c[0]);
    reverse(c, n);
    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
