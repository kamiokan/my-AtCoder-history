#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    priority_queue<int> pq;
    cin >> N >> M;

    while (N--) {
        int A;
        cin >> A;
        pq.push(A);
    }
    while (M--) {
        int x = pq.top();
        pq.pop();
        pq.push(x / 2);
    }

    long long answer = 0;
    while (!pq.empty()) {
        answer += pq.top();
        pq.pop();
    }
    cout << answer << endl;

    return 0;
}

// https://atcoder.jp/contests/abc141/tasks/abc141_d
// D - Powerful Discount Tickets
// 実行時間制限: 2 sec / メモリ制限: 1024 MB
// 問題文
// 高橋くんはN個の品物を1個ずつ順番に買う予定です。
// i番目に買う品物の値段はAi円です。
// 高橋くんは M枚の割引券を持っています。
// 品物を買う際に割引券を好きな枚数使うことができます。
// X円の品物を買う際に Y枚の割引券を使った場合、その品物を
// X/2**Y円(小数点以下切り捨て)で買うことができます。
//最小で何円あれば全ての品物を買うことができるでしょうか。
//
// 制約
// 入力は全て整数である。
//1 ≤ N, M ≤ 10**5
//1 ≤ Ai ≤ 10**9
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// A1 A2 ... An
//
// 出力
//全ての品物を買うのに必要なお金の最小値を出力せよ。
