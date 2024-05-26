/*
4. Water Mixing
Aiman is setting up a perfect bath for himself. He has X litres of hot water and Y litres of cold 
water. The initial temperature of water in his bathtub is A degrees. On mixing water, the 
temperature of the bathtub changes as following:
i. The temperature rises by 1 degree on mixing 1 litre of hot water.
ii. The temperature drops by 1 degree on mixing 1 litre of cold water.
Determine whether he can set the temperature to B degrees for a perfect bath.
• Input contains four space-separated integers A, B, X, and Y — the initial temperature 
of bathtub, the desired temperature of bathtub, the amount of hot water in litres, and the 
amount of cold water in litres respectively.
• Output on a new line, YES if Aiman can get the desired temperature (in a range +3 or -3) for his bath, and 
NO otherwise.
• 20≤A, B≤40
• 0≤X, Y≤20

input           output
24 25 2 0       yes
37 37 2 5       yes
30 20 10 9      no
30 31 0 20      no
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int temp =a+x-y;
    if(b-3<=temp && temp<= b+3){
        cout<<"True, you obtain a desired temperature ";
    }else{
        cout<<"False, you does not obtain a desired bath temperature";
    }
    
}