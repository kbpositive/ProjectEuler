// Project Euler 4
#include<iostream>
#include<cmath>

using namespace std;

int main(){

  int digits = 3;
  int magnitude = pow(10,digits);
  double half = magnitude -1;
  double pal = half + half*magnitude;

  while(half >= pow(10,digits-1)){
  double factorA = magnitude-1;
  double dummy;
    while(pal/factorA < magnitude && modf(pal/factorA,&dummy) != 0.0){
      --factorA;
    }
    if(modf(pal/factorA,&dummy) == 0.0 && pal/factorA < magnitude){
      cout << "The largest palindrome product of two " << digits << "-digit integers is " << pal << " resulting from " << factorA << " and " << dummy << ".\n";
      break;
    }else{
      --half;
      pal = half*magnitude;
      for(int flip = 0; flip < digits; ++flip){
        pal += ((int)(half/pow(10,flip))%10)*pow(10,digits-1-flip);
      }
    }
  }
}
