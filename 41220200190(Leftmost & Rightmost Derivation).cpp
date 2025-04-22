#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> leftmostDerivationChain(string inputString, string grammarRule)
{
    vector<string> derivationChain;
    derivationChain.push_back(inputString);

    while (inputString != "abc")
    {
        int pos = inputString.find_first_of("JABC");

        if (pos != string::npos)
        {
            char nonTerminalChar = inputString[pos];
            if (nonTerminalChar == 'J')
            {
                inputString.replace(pos, 1, "aAbC");
            }
            else if (nonTerminalChar == 'A')
            {
                inputString.replace(pos, 1, "b");
            }
            else if (nonTerminalChar == 'B')
            {
                inputString.replace(pos, 1, "c");
            }
            derivationChain.push_back(inputString);
        }
    }

    return derivationChain;
}

vector<string> rightmostDerivationChain(string inputString, string grammarRule)
{
    vector<string> derivationChain;
    derivationChain.push_back(inputString);

    while (inputString != "abc")
    {
        int pos = inputString.find_last_of("SABC");

        if (pos != string::npos)
        {
            char nonTerminalChar = inputString[pos];
            if (nonTerminalChar == 'S')
            {
                inputString.replace(pos, 1, "aAbC");
            }
            else if (nonTerminalChar == 'A')
            {
                inputString.replace(pos, 1, "b");
            }
            else if (nonTerminalChar == 'B')
            {
                inputString.replace(pos, 1, "c");
            }
            derivationChain.push_back(inputString);
        }
    }

    return derivationChain;
}

int main()
{
    string userInputValue;
    string grammarDefinitionRule = "S->aAbC,A->b|ε,B->c|ε";
    cout << "Enter the input string: ";
    cin >> userInputValue;

    vector<string> leftmostDerivationPath = leftmostDerivationChain(userInputValue, grammarDefinitionRule);
    cout << "Leftmost Derivation:" << endl;
    for (int i = 0; i < leftmostDerivationPath.size(); i++)
    {
        cout << "Step " << i + 1 << ": " << leftmostDerivationPath[i] << endl;
    }

    vector<string> rightmostDerivationPath = rightmostDerivationChain(userInputValue, grammarDefinitionRule);
    cout << "Rightmost Derivation:" << endl;
    for (int i = 0; i < rightmostDerivationPath.size(); i++)
    {
        cout << "Step " << i + 1 << ": " << rightmostDerivationPath[i] << endl;
    }

    return 0;
}
