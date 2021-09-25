#include<stdio.h>
int sumogdigits(int);        /*function declaration*/
int main()
{
int num, result;
printf("enter an integer number");
scanf("%d", &num);
result = sumofdigits(num);
printf("sum=%d", result);
return 0;
}
int sumofdigits(int num)
{
if (num == 0)
   return 0;
else
   return ((num % 10) + sumofdigits(num / 10)); /*recursive function call*/
}
