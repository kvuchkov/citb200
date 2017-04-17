#include <iostream>
#include <map>

using namespace std;

class Fibonacci {
public:
    unsigned long long get(unsigned long long n) {
        if (n < 3)
            return 1;
        else if (mem.count(n)) {
            return mem[n];
        } else {
            unsigned long long r = get(n - 1) + get(n - 2);
            mem[n] = r;
            return r;
        }
    }

private:
    map<unsigned long long, unsigned long long> mem;
};

int main(int argc, char *argv[]) {
    unsigned long long n;
    Fibonacci fib;
    while (cin >> n) {
        cout << fib.get(n) << endl;
    }
    return 0;
}