/*
9. is prime number
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return false;
    if(n%2 == 0) return false;

    /*for value:3 , The condition i <= sqrt(n) translates to 3 <= 1.732, which is false.
    Since the loop condition is false right from the start, the loop body does not execute.
    */
    for(int i =3; i<= sqrt(n);i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a prime number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" "<<"is a Prime number";
    }else{
        cout<<n<<" "<<"is not a Prime number";
    }
}