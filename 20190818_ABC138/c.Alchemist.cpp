#include <iostream>
#include <vector>
#include <algorithm>

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

    sort(vec.begin(), vec.end());

    double mazemono = 0.0;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            mazemono = vec.at(i);
            continue;
        }
        mazemono = (mazemono + vec.at(i)) / 2;
    }

    cout << mazemono << endl;

    return 0;
}
