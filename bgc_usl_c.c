#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// //8: Structs (C's version of classes/objects, but only for data):
// struct car {
//     char *name;
//     float price;
//     int speed;
// };

// struct car saturn = {"Saturn", 123120.9, 123}

// printf("Name: %s\n", saturn.name);


void set_price(struct car *c, float new_price) {
    // (*c).price = new_price;
    c->price = new_price;
}

struct car {
    char *name;
    float price;
    int speed;
};

int main(void){
    struct car saturn = {.speed = 175, .name="Saturnasf"};

    //pass pointer to this sturct car
    set_price(&saturn, 799.99);

    printf("Price: %f\n", saturn.price);
}


//copying and returning structs
struct car a, b;
b = a; // copy the struct



// 7: Strings
// int main(void){
//     // char *s = "Hello world";
//     // printf("%s\n", s);

//     // char s[] = "Hello world";

//     // for (int i = 0; i <13; i++)
//     //     printf("%c\n", s[i]);

//     // string literals are stored far away... string arrays are store at a place where they are accessible
//     char t[] = "Hello, again";
//     t[0] = 'z'; //can you use single quotes for characters, not entire strings

//     printf("%s\n", t);

//     return 0;
// }

// int my_strlen(char *s)
// {
//     int count = 0;

//     while (s[count] != '\0')
//         count++;

//     return count;
// }

// int main(void)
// {
//     char s[] = "Hello, world!";
//     char t[100];

//     // makes copy of the string
//     strcpy(t, s);

//     // we modift t
//     t[0] = 'z';

//     // original, unaffected
//     printf("%s\n", s);

//     // t has been changed
//     printf("%s\n", t);
// }



// 6: ARRAYS:

// int main (void)
// {
    // int i;
    // float f[4];

    // f[0] = 3.123123;
    // f[1] = 12312.1;
    // f[2] = 1.23123;
    // f[3] = 3123.1231;

    // for (i = 0; i<4; i++) {
    //     printf("%f\n", f[i]);
    // }


// this is hilarious - undefined behavior
//     int i;
//     int a[5] = {22,37, 23213,18, 95};
//     for (i =0; i <10; i++) {
//         printf("%d\n", a[i]);
//     }
// }

//     // int a[5] = {22,37, 23213,18, 95,};

//     // an entire array of 0's!
//     // int a[100] = {0};


// // int a[10]= {0,11,22, [5] = 55, 66, 77};

// // #define COUNT 5

// // int a[COUNT] = {[COUNT-3]=3,2,1};

// // int a[] = {22,37,123};


// // TODO: make a game with undefined behavior

// int a[10];
// int b[2][7];
// int c[3][5][6];


// 2x2 arrays
// int main(void)
// {
//     int row, col;

//     int a[2][5] = {
//         {0,1,2,3,4},
//         {5,6,7,8,9}
//     };

//     for (row = 0; row <2; row++) {
//         for (col = 0; col <5; col++) {
//             printf("(%d,%d) = %d\n", row, col, a[row][col]);
//         }
//     }
// }

// int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};


///pointer to an array
// int main(void)
// {
//     int a[5] = {11,22,33,44,55};
//     int *p;

//     // p = &a[0]; // p points to an array (first element of the array)

//     // or

//     p = a;

//     printf("%d\n", *p);
// }

// 6.6.2 Passing Single Dimensional Arrays to Functions

// Passing as a pointer to the first element
// void times2(int *a, int len)
// {
//     for (int i = 0; i < len; i++)
//         printf("%d\n", a[i] * 2);
// }

// void times3(int a[], int len)
// {
//     for (int i = 0; i< len; i++)
//         printf("%d\n", a[i] * 3);
// }

// void times4(int a[5], int len)
// {
//     for (int i = 0; i < len; i++)
//         printf("%d\n", a[i] * 4);
// }

// int main(void)
// {
//     int x[5] = {11,22,33,44,55};

//     times2(x, 5);
//     times3(x, 5);
//     times4(x, 5);
// }






// // pointers

// int main(void)
// {
//     int i;
//     int *p;

//     p = &i; // p points to i, p holds address of i

//     i = 10;
//     *p = 20;

//     printf("i is %d\n", i);
//     printf("i is %d\n", *p);
// }




// void means that it has no return value/doesn't take arguemnts
// void hello(void)
// {
//     printf("Hello, world!\n");
// }

// int main(void)
// {
//     hello();
// }

// function prototype: used to declare that a function will be used later

// int foo(void); //prototype

// int main(void)
// {
//     int i;

//     i = foo();

//     printf("%d\n", i);
// }

// int foo(void)
// {
//     return 3490;
// }


// void main(void) {

//     int i = 10;
//     int *p; // p = uninitialized pointer

//     p = &i;

//     printf("The value of i is %d\n",i);
//     printf("And its address is %p\n", (void *)&i);

//     printf("an int uses %zu bytes of memory\n", sizeof(int));
// }

// always use void when you need it!




// // our first function in C!!!!!!
// int plus_one(int n)
//     {
//         return n + 1;
//     }

// int main(void)
// {
//     // int i = 2;
//     // float f = 3.14;
//     // char *s = "ello world!";

//     // i = 2;

//     // printf("%s i = %d and f = %f!\n", s, i, f);

//     // int x  = 1;

//     // if (x) {
//     //     printf("x is true!\n");
//     // }

//     // bool y = true;

//     // if (y) {
//     //     printf("x is true!\n");
//     // }

//     // int y = 10;

//     // int x = 14;

//     // y += x > 10? 17: 36;

//     // printf("The number %d is %s.\n", x, x%2 ==0? "even": "odd");

//     // int i = 10;
//     // // int j = 5 + ++i;

//     // // printf("%d, %d\n", i, j);


//     // for (i = 0; i <10; i++)
//     //     printf("i is %d\n", i);

//     // int x = 10;
//     // int y = 20;

//     // x = (1, 2, 3);

//     // printf("x is %d\n", x);

//     // int i = 10;
//     // int j = 15;

//     // for (i = 0, j = 10; i < 100; i++, j++)
//     //     printf("%d, %d\n", i, j);

//     // int i = 1;

//     // if (i ==10)
//     //     printf("i is 10!\n");

//     // else if (i == 20)
//     //     printf("i is 20!");

//     // else if (i == 99) {
//     //     printf("i is 99! My favorite");
//     //     printf("deez nuts");
//     // }

//     // else
//     //     printf("lol");

//     // int i = 10;

//     // // while (i < 10) {
//     // //     printf("i is now %d!\n", i);
//     // //     i++;
//     // // }

//     // // printf("All done!\n");


//     // // prints first case no matter what
//     // do {
//     //     printf("do-while: i is %d\n", i);
//     //     i++;
//     // } while (i < 10);

//     // // doesn't print first
//     // while (i <10) {
//     //     printf("print yo");
//     // }

//     // int r;

//     // // do {
//     // //     r = rand() %100;
//     // //     printf("%d\n", r);
//     // // } while (r != 37);


//     // while (r != 37) {
//     //     r = rand() %100;
//     //     printf("%d\n", r);
//     // }

//     // int goat_count = 10;

//     // switch (goat_count) {
//     //     case 0:
//     //     printf("you got zero goats bro\n");
//     //     break;

//     //     case 1:
//     //     printf("you got 1 goats bro\n");
//     //     break;

//     //     case 2:
//     //     printf("you got 2 goats bro\n");
//     //     break;

//     //     default:
//     //     printf("yah man, no goats here\n");
//     //     break;
//     // }

//     int i = 10, j;

//     j = plus_one(i);  // The call

//     printf("i + 1 is %d\n", j);

// }
