
# Project Euler 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

## Description

A general solution to the first problem in the [projecteuler.net](https://projecteuler.net/problem=1) archive in c++. It takes any **target** number and finds the sum of all multiples of every entry in the **inputs** vector.

The multiples are found by finding the 0s of the function
```
sin(PI*x)/inputs
```
for each input; where **PI** is defined to 3.1415926535 (for precision), **x** is every integer from 0 to but not including 1000 (the **target**), and **inputs** is the number we are currently summing the multiples of.

For every **x**, this function is calculated for each **wave** in the **inputs** vector, multiplied by the **precision** variable, rounded to the nearest integer, then multiplied by the **multiples** variable. The result of the function needs to be rounded because sin(**PI**) does not give an exact result of 0, and it needs to be multiplied by **precision** beforehand to prevent outputs which are close to 0 from being counted as multiples.
```
int multiples = 1;
for(int wave = 0; wave < inputs.size(); wave++){
  multiples *= round(sin((PI*x)/inputs[wave])*precision);
}
```

If the sine wave intercepts the **x** axis at this point (that is, if this **x** is a 0 of the overall sine function), it means this **x** is a multiple of any of the variables listed in the **inputs** vector. The **x** is then added to the overall **sum** of multiples.

```
if(multiples == 0){
  sum+= x;
}
```

![Graph of sin((PI*x)/inputs)](/Project1/images/Euler1Graph1.png?raw=true "Graph 1")

Here's a graph showing the added multiples of 15. There are no new spaces since all multiples of 15 are covered by 3 and 5.

![Graph of sin((PI*x)/inputs)](/Project1/images/Euler1Graph2.png?raw=true "Graph 2")

The multiples of 5 and 7.

![Graph of sin((PI*x)/inputs)](/Project1/images/Euler1Graph3.png?raw=true "Graph 3")

Multiples of 5, 7, and 9.

![Graph of sin((PI*x)/inputs)](/Project1/images/Euler1Graph4.png?raw=true "Graph 4")

It should be noted that the precision will need to increase with the value of the highest input since higher inputs will cause the angle of the slope near the x axis to decrease.

## License

This project is licensed under the MIT License.
