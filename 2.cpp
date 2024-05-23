// find the maximum element 
#include <stdio.h>
#include <iostream> // For std::cout
using namespace std;

int max(int a[], int n) {
    int max_val = a[0]; // Initialize max_val with the first element of the array
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    return max_val;
}

int main() {
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(c) / sizeof(c[0]); // Calculate the number of elements in the array
    int result = max(c, n);
    printf("max: %d\n", result);
    cout << "Max: " << result << endl;
    return 0;
}
