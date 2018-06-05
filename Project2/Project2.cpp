// Project Euler 2
#include<iostream>
#include<cmath>

using namespace std;

int length = 0;
int sum = 0;

int fibonacci(int num);

int main(){
  while(fibonacci(length) <= 4000000){
    sum += fibonacci(length);
    length += 3;
  }
    cout << sum;
}

int fibonacci(int num){
  return num < 2 ? num : fibonacci(num-1)+fibonacci(num-2);
}
