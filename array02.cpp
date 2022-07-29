#include <iostream>
using namespace std;
int main(){
   int v[4][4], c = 1;

   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         v[i][j] = c;
         c += 1;
      }
   }
   for (int p = 0; p < 4; p++) {
      for (int k = 0; k < 4; k++) {
         cout << v[p][k] << " ";
      }
      cout << endl;
   }
   
   return 0;
}