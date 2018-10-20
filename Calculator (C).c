#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define KEY "Enter the calculator operation you want to use: "

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
unsigned long long factoring();
void calculator_operations();

int main(void){

    printf("Hi! What is your name?\n");
    char str[50];
    gets(str);
    printf("\nNice to meet you %s! ", str);
    printf("Have fun calculating!");

    int X=1;
    char calc_op;

    calculator_operations();

    while(X){

        printf("\n%s", KEY);

        calc_op = getche();

        switch(calc_op){

            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '^': power();
                      break;

            case '!': factoring();
                      break;

            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;

            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("Oops! %s, you have entered an unavailable operation.\n", str);
    printf("Please enter one of the available operations below.");
                      calculator_operations();
        }
    }
}

void calculator_operations(){

    printf("\n\nPress 'Q' or 'q' to quit the program\n");
    printf("Press 'H' or 'h' to display available options\n");
    printf("Press 'C' or 'c' to clear the screen and display available options\n\n");

    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter * for Multiplication\n");
    printf("Enter / for Division\n");
    printf("Enter ? for Modulus\n");
    printf("Enter ^ for Power\n");
    printf("Enter ! for Factoring\n");
}

void addition(){

   int n, total=0, k=0, num;
   printf("\n\nEnter the number of elements you want to add: ");
   scanf("%d", &n);
   printf("Enter %d numbers one by one:\n", n);
   while(k<n){

       scanf("%d", &num);
       total = total + num;
       k = k + 1;
   }
   printf("\nSum of %d numbers = %d\n", n, total);
}

void subtraction(){

    int a, b, diff = 0;
    printf("\n\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    diff = a - b;

    printf("\n%d - %d = %d\n", a, b, diff);
}

void multiplication(){

    int c, d, prod=0;
    printf("\n\nEnter first number: ");
    scanf("%d", &c);
    printf("Enter second number: ");
    scanf("%d", &d);

    prod = c*d;

    printf("\nProduct = %d\n", prod);
}

void division(){

    int e, f, quotient = 0;
    printf("\n\nEnter dividend: ");
    scanf("%d", &e);
    printf("Enter divisor: ");
    scanf("%d", &f);

    quotient = e/f;

    printf("\nQuotient = %d\n", quotient);
}

void modulus(){

   int g, h, remaining = 0;
   printf("\n\nEnter first number: ");
   scanf("%d", &g);
   printf("Enter second number: ");
   scanf("%d", &h);

   remaining = g%h;

   printf("\nRemainder = %d\n", remaining);
}

void power(){

    double o, num, p;
    printf("\n\nEnter the base number: ");
    scanf("%lf", &o);

    printf("Enter the exponent: ");
    scanf("%lf", &num);

    p = pow(o,num);

    printf("\n%lf to the power %lf = %lf \n", o, num, p);
}

unsigned long long factoring(){

    unsigned long long i, num = 0;

    printf("\n\nEnter a number to find its factors: ");
    scanf("%d", &num);

    printf("Factors of %d:\n", num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
