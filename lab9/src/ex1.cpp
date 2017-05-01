#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool valid(string expr);


int main(int argc, char *argv[]) {
    string line;
    while (getline(cin, line)) {
        cout << (valid(line) ? "YES" : "NO") << endl;
    }
    return 0;
}

inline char opening(char c) {
    return c == ')' ? '(' : '[';
}

bool valid(string expr) {
    stack<char> brackets;
    for (int i = 0; i < expr.length(); i++) {
        char c = expr[i];
        if (c == '(' or c == '[')
            brackets.push(c);
        else if (c == ')' or c == ']') {
            if (brackets.top() == opening(c)) {
                brackets.pop();
            } else
                return false;
        }
    }
    return brackets.empty();
}