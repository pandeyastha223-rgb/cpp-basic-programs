#include <iostream>
using namespace std;
void checkevenodd(int num) {
  if (num % 2 == 0)
    cout << num <<" is even.\n";
else
    cout <<num <<" is odd.\n";
}
int main() {
  int number;
cout <<" enter a number:";
cin >> number;
checkevenodd(number);
return 0;
}
