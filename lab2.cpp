#include<iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

void printResult(string in, string res){
    if (in == res){
        cout<< "Derivation success" << endl;
    }else{
        cout<< "Derivation unsuccessful" << endl;
        cout<< "Input: " << in << " | Max derivation: " << res << endl;
    }
}

string leftmostDerivation(string input, unordered_map<char, vector<string>>& grammar, char entry = 'S'){
    string result = grammar[entry][0]; // start rule from grammar
    cout << "Step: " << result << endl;

    // Iterating over each character in the input string
    for (int i = 0; i < result.size(); i++) {
        char currentChar = result[i];

        // Replace the first non-terminal encountered in the result
        if (grammar.find(currentChar) != grammar.end()) {
            result.replace(i, 1, grammar[currentChar][0]); // Replace with production
            cout << "Step: " << result << endl;
        }

        // If at any step input matches the result, return it
        if (result == input) {
            return result;
        }
    }
    return result;
}

string rightmostDerivation(string input, unordered_map<char, vector<string>>& grammar, char entry = 'S'){
    string result = grammar[entry][0]; // start rule from grammar
    cout << "Step: " << result << endl;

    // Iterating from the rightmost side of the result string
    for (int i = result.size() - 1; i >= 0; i--) {
        char currentChar = result[i];

        // Replace the rightmost non-terminal encountered in the result
        if (grammar.find(currentChar) != grammar.end()) {
            result.replace(i, 1, grammar[currentChar][0]); // Replace with production
            cout << "Step: " << result << endl;
        }

        // If at any step input matches the result, return it
        if (result == input) {
            return result;
        }
    }
    return result;
}

int main(){
    unordered_map<char, vector<string>> grammar;
    grammar['S'] = {"aAB"};
    grammar['A'] = {"b"};
    grammar['B'] = {"c"};

    string input = "abc";

    // Leftmost derivation
    cout << "Left Most Derivation: " << endl;
    string leftMost = leftmostDerivation(input, grammar, 'S');
    cout << "Result: " << leftMost << endl;
    printResult(input, leftMost);

    cout << endl;

    // Rightmost derivation
    cout << "Right Most Derivation: " << endl;
    string rightMost = rightmostDerivation(input, grammar, 'S');
    cout << "Result: " << rightMost << endl;
    printResult(input, rightMost);

    return 0;
}
