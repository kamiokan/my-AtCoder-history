#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<double> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    double bunbo = 0;
    for (int i = 0; i < N; i++) {
        bunbo += 1 / vec.at(i);
    }

    cout << 1 / bunbo << endl;

    return 0;
}
