//with error cannot run yet
#include <stdio.h>
#include <string>
#include <list>
#include <iostream>
using namespace std;

int main(){
    string word;
    list<char> sA, sB;
    string stringA, stringB;
    int check = 0, total = 0, valid = 0, temp_total = 0;

    //get 2 times input for 2 string
    getline(cin, stringA);
    getline(cin, stringB);

    //stroring characters of the string into the list
    for (char ch: stringA){
        sA.push_back(ch);
    }
    for(char ch: stringB){
        sB.push_back(ch);
    }

    //counting thie times that string B can be formed by using string A
    do{
       temp_total =total;
       valid = 0;
       for(char chB: stringB){
        check = 0;
        for(int i =0; i<stringA.size(); i++){
            //remove the used character from the string A
            if(chB == stringA[i]&& check ==0)
                auto it = stringA.begin();
                advance(it, i);
                stringA.erase(it);
                check = 1;
                valid +=1;
        }
        if(valid == stringB.size()){
            total +=1;
        }
       }
    }while(temp_total!=total);

    cout<<total <<endl;
}