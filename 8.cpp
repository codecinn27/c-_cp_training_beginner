//8: using find() to find the substring in a string

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "hello world";
    string toFind = "world";
    
    // Find the position of the substring "world"
    size_t pos = str.find(toFind);
    cout<<"Value of pos: "<<pos<<endl;
    // Output the value of npos
    cout << "Value of npos: " << string::npos << endl;
    //Value of npos: 18446744073709551615

    //is a condition used to check whether a substring was found within a string
    //memorise only
    if (pos != string::npos) {
        //Found 'world' at position: 6
        cout << "Found '" << toFind << "' at position: " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    return 0;
}
