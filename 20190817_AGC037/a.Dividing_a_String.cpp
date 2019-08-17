#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    int count = 0;
    int two_char_flag = 0;
    int i = 0;
//    cout << "S.size(): " << S.size() << endl;
    while (i < S.size()) {
//        cout << "i: " << i << endl;
//        if (i > 0) {
//            cout << "before: " << S.at(i - 1) << endl;
//        }
//        cout << "current: " << S.at(i) << endl;
//        cout << "two_char_flag: " << two_char_flag << endl;
//        cout << "count: " << count << endl;
        if (i == 0) {
            count++;
            i++;
            continue;
        }

        // 前の文字が2文字連結だったとき
        if (two_char_flag == 1) {
            count++;
            i++;
            two_char_flag = 0;
            continue;
        }

        // 最後の文字の場合
        if (i == S.size() - 1) {
            if (S.at(i - 1) == S.at(i)) {
                i += 1; // iインクリメントを1にし、カウントを増やさない
                two_char_flag = 1;
                continue;
            } else {
                count++;
                i++;
                continue;
            }
        }

        // 前の文字が1文字だったとき
        // 同じ文字の場合は連結させる
        if (S.at(i - 1) == S.at(i)) {
            count++;
            i += 2;
            two_char_flag = 1;
            continue;
        } else {
            count++;
            i++;
        }
    }

    cout << count << endl;
}
