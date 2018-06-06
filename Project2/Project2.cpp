// Project Euler 2
#include<iostream>
#include<cmath>

using namespace std;

int length = 0;
int sum = 0;
int target = 4000000;

int fibonacci(int num);

int main(){
  while(fibonacci(length) <= target){
    sum += fibonacci(length);
    length += 3;
  }
    cout << "The sum of all even valued terms in the Fibonacci sequence between " << target << " and 0 is: " << sum;
}

int fibonacci(int num){
  return num < 2 ? num : fibonacci(num-1)+fibonacci(num-2);
}
