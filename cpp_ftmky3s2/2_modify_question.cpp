/*
Given the number of days remaining, calculate the total number of Fridays if today is Tuesday.
Tuesday count as day 1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;

    //today is fridays

    int remaining_days,total_fridays,total_week;
    total_week = n/7;
    remaining_days = n%7;
    if(remaining_days>3){
        total_fridays++;
    }
    total_fridays +=total_week;
    cout<<"Total fridays in "<<n<<"the particular days is :"<<total_fridays<<endl;
    
}