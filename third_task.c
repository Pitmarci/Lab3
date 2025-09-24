/*Approximating Euler's number "e" (the base of the natural logarithm)

The natural number can e=2.7182818… can be obtained by the following infinite sum:

    1    1    1    1    1
e = ── + ── + ── + ── + ── + …
    0!   1!   2!   3!   4!

Write a program to compute it with the first 20 terms! Note that the factorial can be a high number, use a double data type to store it!

Hint: if you have used nested loops, try to simplify your solution! A single loop is enough to solve the problem.*/

#include<stdio.h>

int factor (int x){
    double y = x;
    for(int i = y; i >= 2; i -= 1){
        y = (i)*y;
        
    }
    return y;
}

int main(){
    double e = 1;
    for(int i = 1; i < 15; i++){
        e = e + 1.0/factor(i);
    }
    printf("Euler's number = %f",e);
    return 0;
}
