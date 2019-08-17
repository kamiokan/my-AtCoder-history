#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int K, X, min, max;
  vector<int> answers;
  cin >> K >> X;
  
  min = X - K + 1;
  max = X + K - 1;
  
  for (int i=min; i <= max; i++){
    if (i >= -1000000 && i <= 1000000){
      cout << i;
      if (i  != max){
        cout << " ";
      }else {
        cout << "" << endl;
      }
    }
  }
}
