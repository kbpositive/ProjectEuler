#include<iostream>
#include<cmath>
#include<vector>
#define PI 3.1415926535

using namespace std;

int sum = 0;
int precision = 10;
int target = 1000;
vector<int> inputs = {3,5};

int main(){
  for(int x = 0; x < target; x++){
    int multiples = 1;
    for(int wave = 0; wave < inputs.size(); wave++){
      multiples *= round(sin((PI*x)/inputs[wave])*precision);
    }
    if(multiples == 0){
      sum+= x;
    }
  }
  cout << "Sum of multiples: "<< sum << "\n";
}
