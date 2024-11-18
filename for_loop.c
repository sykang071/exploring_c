// Objective

// In this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be executed until a terminal condition is met. They can even repeat forever if the terminal condition is never met.

// The syntax for the for loop is:

// for ( <expression_1> ; <expression_2> ; <expression_3> )
//     <statement>
// expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
// expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
// expression_3 is generally used to update the flags/variables.
// The following loop initializes  to 0, tests that  is less than 10, and increments  at every iteration. It will execute 10 times.

// for(int i = 0; i < 10; i++) {
//     ...
// }
// Task

// For each integer  in the interval  (given as input) :

// If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".
// Input Format

// The first line contains an integer, .
// The seond line contains an integer, .

// Constraints


// Output Format

// Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

// Note:

// Sample Input

// 8
// 11
// Sample Output

// eight
// nine
// even
// odd

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i = a; i<=b; i++){
        if (i== 1){
            printf("one\n");
        }
        else if (i==2)
        {
            printf("two\n");
        }
        else if (i==3)
        {
            printf("three\n");
        }
        else if (i==4)
        {
            printf("four\n");
        }
        else if (i==5)
        {
            printf("five\n");
        }
        else if (i==6)
        {
            printf("six\n");
        }
        else if (i==7)
        {
            printf("seven\n");
        }
        else if (i==8)
        {
            printf("eight\n");
        }
        else if (i==9)
        {
            printf("nine\n");
        }
        else if (i>9 && i%2 ==0)
        {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}

