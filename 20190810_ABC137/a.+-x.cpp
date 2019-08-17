#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, plus, minus, multipl;
  cin >> A >> B;
  
  plus = A + B;
  minus = A - B;
  multipl = A * B;
  
  if (plus > minus && plus > multipl) {
    cout << plus << endl;
  } else if (minus > multipl) {
    cout << minus << endl;
  } else {
    cout << multipl << endl;
  }
}
