#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class BracketValidator {
public:
    BracketValidator(const string &expression);
    bool isValid();
private:
    bool isOpeningBracket(char c);
    bool isClosingBracket(char c);
    bool matchBrackets(char closingBracket, char openingBracket);
    
    string expression;
};

int main(int argc, char *argv[]) {
    string expression;
    while (getline(cin, expression)) {
        cerr << "Expression: " << expression << endl;
        BracketValidator validator(expression);
        if (validator.isValid()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

BracketValidator::BracketValidator(const string &expression) : expression(expression) {

}

bool BracketValidator::isValid() {
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

bool BracketValidator::isOpeningBracket(char c){
    return c == '(' || c == '[';
}
bool BracketValidator::isClosingBracket(char c) {
    return c == ')' || c == ']';
}
bool BracketValidator::matchBrackets(char closingBracket, char openingBracket) {
    if (openingBracket == '(') {
        return closingBracket == ')';
    } else if(openingBracket == '[') {
        return closingBracket == ']';
    } else {
        return false;
    }
}
