# The prime factors of 13195 are 5, 7, 13 and 29.

# What is the largest prime factor of the number 600851475143?

from math import sqrt, ceil
from typing import List

def strToListInt(str: str) -> List[int]:
    return [int(digit) for digit in str]

def listDivide(numerator: List[int], denominator: int) -> (List[int], bool):
    remainder = 0
    quotient = numerator[:]
    for index, digit in enumerate(quotient):
        fullDigit = digit + remainder*10
        quotient[index] = fullDigit // denominator
        remainder = fullDigit % denominator
    return quotient, bool(remainder)

def primeFactors(num: str) -> List[int]:
    listNum = strToListInt(num)
    if len(listNum) % 2:
        squareRoot = ceil(sqrt(listNum[0]+1))*10**((len(listNum)-1)//2)
    else:
        squareRoot = ceil(sqrt(listNum[0]*10+listNum[1]+1))*10**((len(listNum)-2)//2)

    primes = []
    remainderExists = True
    factor = 2
    while factor < squareRoot:
        remainderExists = listDivide(listNum, factor)[1]
        if remainderExists is not True:
            primes.append(factor)
            while listDivide(listNum, factor)[1] is not True:
                listNum = listDivide(listNum, factor)[0]
        factor += 1
    primes.append(int(''.join([str(digit) for digit in listNum])))
    return primes

pfs = primeFactors("600851475143")
print(max(pfs))
