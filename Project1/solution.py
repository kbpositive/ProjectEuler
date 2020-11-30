# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

# Find the sum of all the multiples of 3 or 5 below 1000.

import math
from typing import List

def sum_of_muls_of_x_below_y(x: List[int], y: int) -> int:
    multiples = []
    for num in x:
        multiples += [multiple*num for multiple in range(1,math.ceil(y/num))]
    return sum(set(multiples))


print(sum_of_muls_of_x_below_y([3,5], 1000))
