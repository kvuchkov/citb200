#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];
    int mat[n][n] = {0}; // all zeroes

    for (int i = 0; i < n; i++)
        cin >> names[i];

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        mat[u][v] = 1; // u is a friend of v
        mat[v][u] = 1; // and v is a friend of u
    }

    int q;
    while (cin >> q) { //list the friends if q
        cout << names[q] << ":"; // print the name of q

        for (int i = 0; i < n; i++) {
            if (mat[q][i]) // then i is a friend of q
                cout << " " << names[i];
        }
        cout << endl;
    }

    return 0;
}