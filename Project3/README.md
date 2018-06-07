# Project Euler 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime topFactor of the number 600851475143?

## Description

## Solution 

## License

This project is licensed under the MIT License.

Inputs

  intString(x)a
  factors(x,y...)b

Functions/Objects

  topFactor(a,x)
    Inputs

      intString(x)a
      divisor(x)b

    Functions/Objects

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
        factors.push_back(stoi(result));
      }

    Outputs

      updated factors vector

  primeCheck
    Inputs

      none

    Funtions/Objects


      for(int check = 0; check < factors.size(); check++){
        for(int prime = 2; prime < factors[check]; prime++){
          if(factors[check] % prime == 0){
            factors.erase(factors.begin()+check);
            check--;
            break;
          }
        }
      }

      Outputs

        updates factors vector to consist only of prime numbers

Outputs
