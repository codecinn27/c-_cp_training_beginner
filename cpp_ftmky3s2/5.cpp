/*
5. Find Set
You are given a set of N strings. Your task is to determine the minimum possible size of set S
(S is a subset of N strings) such that it meets the following conditions:
i. All N strings must be covered by set S
ii. A string P is said to be covered by the set S if either P exists in S or any substring of P
exists in S.
• Input contains N space-separated string P
• Print the minimum possible size of set S , which covers all the N strings.
• 1≤N≤500
• 1≤|P|≤500

input , output
1)google development develop test contest, 3
2)coding fan fans cod fantasy, 2
3)law lawyer court out raw, 4

explanation
1) 3 , {google, development, contest} cover {test, develop}
2) 2, {coding ,fantasy} cover {fans, cod, fan}
3) 4, {lawyer, court, out ,raw} covers {law}
The goal is to find the smallest such set that satisfies these conditions.
*/


//not yet complete
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Include algorithm header for find function
using namespace std;


//function to check if a word is covered by the given set of words
bool isCovered(string word, vector<string>& wordSet){
    // Check if the word itself is in the set
    auto it = find(wordSet.begin(), wordSet.end(), word);
    if (it != wordSet.end()) {
        wordSet.erase(it); // Remove the word from the set
        return true;
    }

    // Check if any substring of the word is in the set
    for (int i = 0; i < word.length(); i++) {
        for (int j = i + 1; j <= word.length(); j++) {
            string sub = word.substr(i, j - i);
            it = find(wordSet.begin(), wordSet.end(), sub);
            if (it != wordSet.end()) {
                wordSet.erase(it); // Remove the substring from the set
                return true;
            }
        }
    }
    return false;
}

int main(){
    int N;
    cout<<"Enter the number of strings: ";
    cin>>N;

    //input strings
    vector<string> strings(N);
    cout<<"Enter the strings:";
    for(int i=0; i<N; i++){
        cin>>strings[i];
    }

    //initialize the count of words covered
    int count =0;

    //copy the input strings for manipulation
    vector<string> wordSet = strings;

    for(const string& word: strings){
        if(isCovered(word, wordSet)){
            count++;
        }
        
    }

    cout<<"Minimum possible size of set S: "<<count<<endl;
    return 0;
}