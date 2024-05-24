//6: Remove a Character by Iterator

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "hello";
    
    // Remove the character at the iterator position (pointing to 'e')
    str.erase(str.begin() + 1);
    
    cout << str << endl; // Output: hllo
    
    return 0;
}
