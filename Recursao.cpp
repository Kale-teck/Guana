#include <iostream>
using namespace std;

int sum(int k) { //a função é declarada
  if (k > 0) { // condição para que não dê overclock
    return k + sum(k - 1); // k = 10 + ( 9 + ( 8 + sum(7) ) ) 
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10); // sum(10)==55 (10+9+8...+1)
  cout << result << "\n";
  return 0;
}