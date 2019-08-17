#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  string S;
  unordered_map<string, int> count;
  long result = 0;
  
  int i = 0;
  while(i < N) {
    cin >> S;
    sort(S.begin(), S.end());
    if (count[S] > 0 ) {
      result += count[S];
    }
    count[S]++;
    i++;
  }
 
  cout << result << endl;
}
