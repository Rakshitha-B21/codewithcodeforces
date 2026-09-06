#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int level = 1;
    int cubes = 0;

    while (true) {
        cubes += level;

        if (n < cubes)
            break;

        n -= cubes;
        height++;
        level++;
    }

    cout << height << endl;

    return 0;
}