// Project Euler 4
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int digits = 4;
int a = pow(10,digits)-1;
int b;

bool check(int in);

int main(){
  while(a > 0){
    b = a;
    while(b < pow(10,digits)){
      if(check(a*b) == true){
        cout << a*b << " is the largest palindrome to result from the product of two "<< digits << " digit integers: " << a << " and " << b << "\n";
        break;
      }else{
        ++b;
      }
    }
    --a;
  }
}

bool check(int in){
  bool pal = false;
  for(int count = 0; count < to_string(in).length()/2; ++count){
    if(to_string(in)[count] == to_string(in)[to_string(in).length()-count-1]){
      pal = true;
    }else{
      pal = false;
      break;
    }
  }
  return pal;
}
