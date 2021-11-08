#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int lenghNumber(int number)
{
    return floor(log10(abs(number))) + 1;
}

int isArmstrongR(int number, int nDigits, int sum)
{   
    if(lenghNumber(number) == 1)
    {
        return pow((number % 10), nDigits);
    }
    int tmp = pow((number % 10), nDigits);
    sum = tmp + isArmstrongR(number / 10, nDigits, sum);
    return sum;
}
int isArmstrong(int number)
{
    int nDigits = lenghNumber(number), sum = 0;
    sum = isArmstrongR(number, nDigits, sum);
    if(sum == number)
    {
        // printf("is Armstrong\n");
        return 1;

    }
    else
    {
        return 0;
    }
}
int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int isPalindrome(int num){
    if(num == reverse(num)) return 1;
    else return 0;
}