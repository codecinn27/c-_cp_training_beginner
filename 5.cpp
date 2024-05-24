//5. removing a substring 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "hello world";
    
    // Remove the substring "world"
    str.erase(6, 5);
    
    cout << str << endl; // Output: hello
    
    return 0;
}