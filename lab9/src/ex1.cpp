#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool isOpeningBracket(char c);
bool isClosingBracket(char c);
bool matchBrackets(char closingBracket, char openingBracket);
bool validateBrackets(string expression);

int main(int argc, char *argv[]) {
    string expression;
    while (getline(cin, expression)) {
        cerr << "Expression: " << expression << endl;
        if (validateBrackets(expression)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

bool validateBrackets(string expression) {
    stack<char> openingBrackets;
    for(char c : expression) {
        if(isOpeningBracket(c)) {
            openingBrackets.push(c);
        } else if(isClosingBracket(c)) {
            if (matchBrackets(c, openingBrackets.top())) {
                openingBrackets.pop();
            } else {
                break;
            }
        }
    }
    return openingBrackets.empty();
}

bool isOpeningBracket(char c){
    return c == '(' || c == '[';
}
bool isClosingBracket(char c) {
    return c == ')' || c == ']';
}
bool matchBrackets(char closingBracket, char openingBracket) {
    if (openingBracket == '(') {
        return closingBracket == ')';
    } else if(openingBracket == '[') {
        return closingBracket == ']';
    } else {
        return false;
    }
}
