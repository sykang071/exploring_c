#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    // printf("I like pizza\n");
    // printf("It's really good!");


    // int x; //declaration, creating space in memory to store variable
    // x = 123; //initialization

    // int y = 321; //declaration + initialization
    // int age

    // printf("%0.15f\n", c); // float
    // printf("%lf\n", d) // double

    // bool e = true;

    // char f = 120;
    // unsigned char g = 256

    // short
    // unsigned

    // long long int
    // unsigned long longsss int

    // const float PI = 3.23123 // constant = fixed value that cannot be changed on execution, usually in all caps

    // x /= 5


    // you can cast the datatype by placing the data type in parantheses
// e

//     char name[25]; //bytes
//     int age;

//     printf("\nWhat is your name?");
//     //scanf("%s", &name);
//     fgets(name, 25, stdin);
//     name[strlen(name)-1] = '\0';

//     // user input
//     printf("\nHow old are you?");
//     scanf("%d", &age);

//     printf("\nYour name is %s", name);
//     printf("\nYou are %d years old", age);

//     double A = sqrt(9);
//     double B = pow(2,4);
//     int C = ceil (3.14);
//     int E = floor(3.99);
//     double F = fabs(-100);


//     return 0;

    // const double PI = 3.14519;
    // double radius;
    // double circumference;
    // double side_length;
    // double area;

    // printf("\nEnter radius of a circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;

    // printf("circumference: %lf", circumference);

    // printf("\nEnter the lenght of a side of a square: ");
    // scanf("%lf", &side_length);

    // area = side_length * side_length;

    // printf("area of a square: %lf", area);

    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A*A + B*B);

    // printf("Side C: %lf", C);

    // return 0;

    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if(age >= 18){
    //     printf("You are signed up!");
    // }
    // else if (age == 0){
    //     printf("You can't sign up! You were just born!");
    // }
    // else if (age < 0){
    //     printf("You haven't been born yet!");
    // }
    // else{
    //     printf("You are too young to sign up!");
    // }

    // return 0;

    // char grade;

    // printf("\nEnter a new grade: ");
    // scanf("%c", &grade);

    // switch(grade){
    //     case 'A':
    //         printf("perfect!\n");
    //         break;
    //     case 'B':
    //         printf("You ddid good!\n");
    //         break;
    //     case 'C':
    //         printf("Nice stuff broski\n");
    //         break;
    //     default:
    //         printf("wrong stuff broski\n");
    // }

    // char unit;
    // float temp;

    // printf("\nIs the temperature in (F) or (C)?: ");
    // scanf("%c", &unit);

    // unit = toupper(unit);

    // if(unit == 'C'){
    //     printf("Enter temp in C: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9 / 5) + 32;
    //     printf("\nTHe temp in Farenheit is %.1f", temp);
    // }
    // else if(unit == 'F'){
    //     printf("Enter temp is in F: ");
    //     scanf("%f", &temp);
    //     temp = ((temp-32)*5)/9;
    //     printf("\nTHe temp in Celsius is %.1f", temp);
    // }
    // else {
    //     printf("The temp is incorrect");

    // }
    // return 0;

    //CALCULATOR
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+' :
            result = num1 + num2;
            printf("\nresult: %lf",  result);
            break;
        case '-' :
            result = num1 - num2;
            printf("\nresult: %lf",  result);
            break;
        case '*' :
            result = num1 * num2;
            printf("\nresult: %lf",  result);
            break;
        case '%' :
            result = num1 * num2;
            printf("\nresult: %lf",  result);
            break;
        default:
            printf("%c is not valid", operator);
    }
    return 0;

}