//sum of array function

#include <stdio.h>
#include <iostream> // For std::cout
using namespace std;

int sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = sum(c, 10);
    printf("Sum: %d\n", result);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
