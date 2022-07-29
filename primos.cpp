#include <iostream>
using namespace std;
int main() {
    int p, t=0;
    cin >> p;

    for (int i = 1; i <= p; i++) 
    {
      if(p%i==0){
         t++;
      }
    } 
    if (t==2 || t==1) {
      cout << p << " é primo " << endl;
    } else {
      cout << p << " não é primo " << endl; 
    }
   return 0;
}