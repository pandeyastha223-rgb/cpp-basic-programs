#include <iostream>
using namespace std;
bool isprime(int num){
  if (num <= 1) return false;
for (int i= 2; i*i <=num; i++){
if(num % i== 0) return false;
}
return true;
}
int main() {
  int number;
cout <<"enter a number:";
cin >> number;
if (isprime(number))
  cout << number <<" is a prime number.\n";
else
  cout << number <<" is not a prime number.\n";
return 0;
} 
