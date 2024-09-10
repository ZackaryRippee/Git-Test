
#include <iostream>
using namespace std;

int sum (int number);

int main (){
  int userNumber = 0;
  cout << "Enter a number: ";
  cin >> userNumber;
  cout << endl << "Sum: " << sum(userNumber);
  
  return 0;
}

int sum(int number){
  int value = 0;
  for (int i = 0; i < number; i++){
    value = i + value;
  }
  value = value + number;
  return value;
}
