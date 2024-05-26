/*
 Prime Query
You are given an array A having N integers and Q queries. Each query is described by two 
integers L and R. For each query, find the number of pairs (i, j) such that L≤i<j≤R and Ai+Aj
is a prime number.

• Input contains 2 + Q lines:
o two space-separated integers, which are number of integers, N and number of 
queries, Q
o N space-separated integers, A1, A2, A3, …, AN
o Q lines which each contains two space-separated integers, L and R
• Print the number of pairs that satisfies the given conditions in a separate line for each 
query.
• 2≤N≤105
• 0≤Ai≤105
• 1≤Q≤105
• 1≤L≤R≤N

1st example
input                  output
5 2                    1
2 4 1 0 5              5
3 5
1 5

2nd example
input                  output 
5 2                    2
1 2 3 4 5              3
1 3
2 5
*/


//not yet complete
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    if(n==0) return true;
    if(n%2 == 0) return false;
    for(int i= 3; i<= sqrt(n); i+=2){
        if(n%i ==0) return false;
    }
    return true;
}

bool isPrimePair(int x, int y, const vector<int>& A) {
    int sum = A[x] + A[y];
    return isPrime(sum);
}

int main(){

    int N, Q;
    cin>>N>>Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> result;
    for(int q=0; q<Q; q++){
        int L,R;
        cin>>L>>R;
        L--;R--; //convert to zero-based index

        int count =0;
        for(int i=L; i<R; i++){
            for(int j=i+1; j<=R; j++){
                if(isPrime(A[i]+A[j])){
                    count++;
                }
            }
        }
        /*same as result[q] = count, this is better as you no need to define
        a fixed size at the beginning
        */
        result.push_back(count);
    }

    cout<<"output: "<<endl;
    for(int i=0;i<Q; i++){
        cout<<result[i]<<" ";
    }

}
