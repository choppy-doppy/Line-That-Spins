#include <iostream>

using namespace std;

int main() {
    cout << "raaahhh" << endl;

    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "enter number of terms" << endl;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i == 1)
            cout << t1 << " ";
        if (i == 2)
            cout << t2 << " ";

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
}

