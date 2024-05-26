/*
Find the top 3 elements in the array, without repeating
*/

#include<iostream>
using namespace std;

void print3largest(int arr[], int arr_size){
    int first,second,third;
    if(arr_size<3){
        cout<<"invalid input";
        return;
    }
    //assign 0 to the three variable
    third = second = first = INT_MIN;
    for(int i=0; i<arr_size; i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }else if (arr[i]>second && arr[i]!=first)
        {
            third = second;
            second = arr[i];
        }else if(arr[i]>third && arr[i]!=second && arr[i]!=first){
            third = arr[i];
        }
    }
    cout<< "Three largest elements are "<< first << " " << second << " "<< third << endl; 
};

int main(){

    int arr[] = {10, 4, 3, 50, 23, 90,90};
    int arr2[] = { 6, 8, 1, 9, 2, 1, 10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr, n); 
    return 0; 
}