/* There are N spooky days left until Halloween. Dracula dines at a mysterious restaurant that 
changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.
Today is Monday, so he wishes to calculate how many times he can indulge in his favourite 
menu in the next N days (including today) before Halloween.
Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following 
Monday.
• Input contains a single integer N, denoting the number of spooky days.
• output on a new line the number of times Dracula would have had his favourite meal 
after N days.
• 1≤N≤1000  */

/*
input :output
1: 0
10: 2
15: 2
16: 3
*/

#include <iostream>
using namespace std;

int main(){
    //today is Monday
    int tuesday;
    int n;
    cin>>n;
    int full_week = n/7;
    int remaining_days = n%7;
    if(remaining_days>1){
        tuesday++;
    }
    tuesday = tuesday +full_week;
    cout<<"Total number of tuesday: "<<tuesday<<endl;
}