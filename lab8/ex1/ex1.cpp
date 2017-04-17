#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n) {
    if(n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
    unsigned long long n;
    while(cin >> n) {
        cout << factorial(n) << endl;
    }
    return 0;
}