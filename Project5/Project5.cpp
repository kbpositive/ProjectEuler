#include<iostream>
#include<cmath>
#include<numeric>
#include<vector>

using namespace std;

vector<int> spi = {2}; // Smallest Positive Integer
int minfact = 1; // lowest desired factor for spi
int maxfact = 20; // highest desired factor for spi

int main(){
  cout << "The smallest positive integer able to be divided by every integer from " << minfact << " to " << maxfact << " is ";
  for(int count = minfact; count <= maxfact; ++count){
    minfact = count;
    for(int factor = 0; factor < spi.size(); ++factor){
      if(minfact % spi[factor] == 0){
        minfact /= spi[factor];
      }
      if(minfact == 1){
        break;
      }
    }
    if(minfact > 1){
      spi.push_back(minfact);
    }
  }
  cout << accumulate(spi.begin(),spi.end(),1,multiplies<int>()) << ".\n";
}
