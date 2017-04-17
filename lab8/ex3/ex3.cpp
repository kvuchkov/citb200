#include <iostream>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if(a < b) swap(a, b);
    unsigned long long r = a % b;
    return r ? gcd(b, r) : b;
}

unsigned long long gcdit(unsigned long long a, unsigned long long b) {
    if(a < b)
        swap(a, b);

    unsigned long long r;
    do {
        r = a % b;
        a = b;
        b = r;
    } while(r);

    return a;
}

int main(int argc, char *argv[]) {
    unsigned long long a, b;
    while(cin >> a >> b) {
        cout << gcd(a, b) << " " << gcdit(a, b) << endl;
    }
    return 0;
}