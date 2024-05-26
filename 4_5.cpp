/*
Find the top 3 elements in the array, with repeating
*/

#include <iostream>
using namespace std;

void print3largest(int arr[], int size_arr){

    if(size_arr<3){
        cout<<"invalid input";
        return;
    }
    int first,second,third;
    first = second = third = INT_MIN;
    for(int i=0;i<size_arr; i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }else if(arr[i]>second){
            third = second;
            second = arr[i];
        }else if(arr[i]>third){
            third = arr[i];
        }
    }
    cout<<"The top 3 element in the array is : "<<first<<" "<<second<<" "<<third<<" "<<endl;
}

int main(){
    int arr[] = {10, 4, 3, 50, 23, 90,90};
    int arr2[] = { 6, 8, 1, 9, 2, 1, 10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr, n); 
    return 0; 
}