#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool isOpeningBracket(char c);
bool isClosingBracket(char c);
bool matchBrackets(char closingBracket, char openingBracket);

int main(int argc, char *argv[]) {
    string expression;
    stack<char> brackets;
    while (getline(cin, expression)) {
        cerr << "Expression: " << expression << endl;
        for(char c : expression) {
            if(isOpeningBracket(c)) {
                brackets.push(c);
            } else if(isClosingBracket(c)) {
                if (matchBrackets(c, brackets.top())) {
                    brackets.pop();
                } else {
                    break;
                }
            }
        }
        if (brackets.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
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
