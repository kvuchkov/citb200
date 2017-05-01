#include <iostream>
#include <stack>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

bool valid(string expr);


int main(int argc, char *argv[]) {
    if (argc < 2)
        return -1;

    ifstream fin(argv[1]);
    if (fin.fail())
        return -2;

    map<string, int> m;

    string word;
    while (fin >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        m[word] = m[word] + 1;
    }

    map<string, int>::iterator best = m.begin();
    for (auto it = m.begin(); it != m.end(); it++) {
        if (best->second < it->second)
            best = it;
    }

    cout << best->first << " " << best->second << endl;

    return 0;
}