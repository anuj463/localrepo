#include<stdio.h>

int main(){
   int num1,num2;
   char operator;

   printf("Enter first number:");
   scanf("%d",&num1);
   printf("Enter second number:");
   scanf("%d",&num2);
   printf("Enter operator:");
   scanf("%c",&operator);

   switch(operator){

    case '+':printf("Sum=%d\n",num1+num2);
             break;
    case '-':printf("Difference=%d\n",num1-num2);
             break;  
    case '*':printf("Product = %d\n",num1*num2);
             break;
    case '/':printf("Division = %d\n",num1/num2);
             break;

    default: printf("Invalid operator\n");
             break;
   }


    return 0;
}