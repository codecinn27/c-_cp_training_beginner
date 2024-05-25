

//input xyzxyzxx  , xyz  
//output 2
//input 2 ededzsesed , ed
//output 3

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    string stringA, stringB;
    int total = 0;

    // Get 2 times input for 2 strings
    getline(cin, stringA);
    getline(cin, stringB);

    while (true) {
        string tempStringA = stringA;
        bool canForm = true;

        // Check if we can form stringB from tempStringA
        for (char chB : stringB) {
            size_t pos = tempStringA.find(chB);
            if (pos != string::npos) {
                tempStringA.erase(pos, 1);
            } else {
                canForm = false;
                break;
            }
        }

        if (canForm) {
            total++;
            stringA = tempStringA;  // Update stringA after removing used characters
        } else {
            break;
        }
    }

    cout << total << endl;

    return 0;
}