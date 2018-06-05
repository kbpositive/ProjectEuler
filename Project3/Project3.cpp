// Project Euler 3
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

string intString = "600851475143";
vector<string> factors;

void topFactor(string& dividend, int& divisor);
void primeCheck();

int main(){
  for(int y = 2; y < stoi(intString.substr(0,9)); y++){
    topFactor(intString,y);
  }
  //primeCheck();
  for(int x = 0; x < factors.size(); x++){
    cout << factors[x] << "\n";
  }
}

void topFactor(string& dividend, int& divisor){
    string stringSeg = "";
    string result = "";
    for(int place = 0; place < dividend.length(); place++){
      stringSeg += dividend[place];
      result += to_string(stoi(stringSeg) / divisor);
      if((stoi(stringSeg) % divisor) != 0){
        stringSeg = to_string(stoi(stringSeg) % divisor);
      }else{
        stringSeg = "";
      }
    }
    if(stringSeg == ""){
      dividend = result;
      divisor--;
      factors.push_back(result);
    }
}

void primeCheck(){
  for(int check = factors.size(); check > 0; check--){
    for(int prime = 2; prime < stoi(factors[check]); prime++){
      if(stoi(factors[check]) % prime == 0){
        factors.erase(factors.begin()+check);
        check++;
        break;
      }
    }
  }
}
