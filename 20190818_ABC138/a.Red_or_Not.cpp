#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a;
    string s;
    cin >> a >> s;

    if (a >= 3200) {
        cout << s << endl;
    } else {
        cout << "red" << endl;
    }

    return 0;
}
