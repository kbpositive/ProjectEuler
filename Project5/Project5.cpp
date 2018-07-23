// Project Euler 5
#include<iostream>
#include<cmath>
#include<vector>
#include<numeric>

using namespace std;

int minfact = 2; // lowest divisor for spi
vector<int> spi = {2}; // smallest positive integer
int maxfact = 20; // highest divisor for spi

int main(){
  cout << "The smallest positive integer that is evenly divisible by every integer from " << minfact-1 << " to " << maxfact << " is ";
  int count = 2;
  while(count <= maxfact){
  minfact = count;
    for(int factor = 0; factor < spi.size(); ++factor){
      if(minfact % spi[factor] == 0){
        minfact /= spi[factor];
      }
    }
    if(minfact > 1){
      spi.push_back(minfact);
    }
    ++count;
  }
  cout << accumulate(spi.begin(),spi.end(),1,multiplies<int>()) << ".\n";
}
