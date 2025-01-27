#include <iostream>

using namespace std;
float Sum(float a, float b) { return a + b; }

int main() {

  float z;
  float x;
  cout << "2 num separate by enter" << endl;
  cin >> z;
  cin >> x;
  cout << "Summ = " << Sum(z, x) << endl;
  return 0;
}

