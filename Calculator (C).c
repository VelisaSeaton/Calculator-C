#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define KEY "Enter the calculator operation you want to use"

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();

int main(void){

    printf("Hi! What is your name?\n");
    char str[50];
    gets(str);
    printf("Nice to meet you %s! ", str);
    printf("Have fun calculating!\n\n");

    int X=1;
    char Calc_oprn;

    calculator_operations();

    while(X){

        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn){

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

            case '!': factorial();
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

    printf("You have entered an unavailable operation.\n");
    printf("Please enter one of the available operations below.\n\n");
                      calculator_operations();
        }
    }
}

void calculator_operations(){

    printf("Press 'Q' or 'q' to quit the program\n");
    printf("Press 'H' or 'h' to display available options\n");
    printf("Press 'C' or 'c' to clear the screen and display available options\n\n");

    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter * for Multiplication\n");
    printf("Enter / for Division\n");
    printf("Enter ? for Modulus\n");
    printf("Enter ^ for Power\n");
    printf("Enter ! for Factorial\n");
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

    int a, b, c = 0;
    printf("\n\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    c = a - b;

    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication(){

    int a, b, mul=0;
    printf("\n\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    mul = a*b;

    printf("\nProduct = %d\n", mul);
}

void division(){

    int a, b, d = 0;
    printf("\n\nEnter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);

    d = a/b;

    printf("\nQuotient = %d\n", d);
}

void modulus(){

   int a, b, d = 0;
   printf("\n\nEnter first number: ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);

   d = a%b;

   printf("\nRemainder = %d\n", d);
}

void power(){

    double a,num, p;
    printf("\n\nEnter the base number: ");
    scanf("%lf", &a);

    printf("Enter the exponent: ");
    scanf("%lf", &num);

    p = pow(a,num);

    printf("\n%lf to the power %lf = %lf \n", a, num, p);
}

int factorial(){

    int i, fact=1, num;

    printf("\n\nEnter a number to find factorial: ");
    scanf("%d", &num);

    if (num<0){

        printf("\nPlease enter a number equal to or greater than 0.\n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact = fact*i;
    printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}
