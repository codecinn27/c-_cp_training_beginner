/*
10. input into a n-number of value into a vector
- vector has dynamic size, itcan resize by adding element or remove it
- you do not need to know the size of the aray at compile time
- use push_back to manipulate it easily
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        int value;
        cin>>value;
        A.push_back(value); // Use push_back to add the element to the vector
    }

    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}