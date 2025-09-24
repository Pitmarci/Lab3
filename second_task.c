/*Calculate the sum of divisors for a number entered by the user. (e.g. for 6: 1+2+3+6 = 12.) Modify your algorithm to exclude the number itself from the summation. What should be changed in the program?

Perfect number is an integer that equals to this sum (so the sum of divisors, including 1, excluding the number itself). The first perfect number is 6 as 1+2+3=6. 
The next two are 28 and 496. Print out if the number entered by the user is a perfect number or not.

Hint: Sum of divisors implies applying summation: a loop, and summing in the accumulator. In our case not all numbers in the loop qualify for being a divisor. */

#include <stdio.h>

int main(){
    int n, d;
    int s = 0;
    
    printf("Please enter a number: \n");
    scanf("%d",&n);

    for(int i = 1; i < n; i++){
        if(n%i == 0){
            s = s + i;
        }
    }
    printf("The sum of the divisors is %d.\n",s);
    if(s == n){
        printf("%d is a perfect number!",n);
    }

}
