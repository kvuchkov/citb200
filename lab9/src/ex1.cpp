#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>

using namespace std;

bool isOpeningBracket(char c);
bool isClosingBracket(char c);
bool matchBrackets(char openingBracket, char closingBracket);

const int NOT_A_BRACKET = 0;
const int BRACKET = 1;
const int SQUARE_BRACKET = 2;
int typeOfBracket(const char c);

class BracketValidator {
public:
    BracketValidator(const string &expression);
    bool validate();
private:
    string expression;
};

int main(int argc, char *argv[]) {
    string expression;
    while(getline(cin, expression)) {
        cerr << "Expression: " << expression << endl;
        BracketValidator bracketValidator(expression);
        if (bracketValidator.validate()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


bool isOpeningBracket(char c) {
    return c == '(' || c == '[';
}
bool isClosingBracket(char c) {
    return c == ')' || c == ']';
}

int typeOfBracket(const char c) {
    if (c == '(' || c == ')') {
        return BRACKET;
    } else if (c == '[' || c == ']') {
        return SQUARE_BRACKET;
    } else {
        return NOT_A_BRACKET;
    }
}

bool matchBrackets(char openingBracket, char closingBracket) {
    if (typeOfBracket(openingBracket) == typeOfBracket(closingBracket)) {
        return true;
    } else {
        return false;
    }
}

BracketValidator::BracketValidator(const string &expression) : expression(expression) {}
bool BracketValidator::validate() {
    stack<char> openingBrackets;
    for (char c : expression) {
        if (isOpeningBracket(c)) {
            openingBrackets.push(c);
        } else if(isClosingBracket(c)) {
            if (matchBrackets(openingBrackets.top(), c)) {
                openingBrackets.pop();
            } else {
                break;
            }
        }
    }
    return openingBrackets.empty();
}
