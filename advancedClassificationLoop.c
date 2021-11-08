#include <stdio.h>
#include<math.h>

int isPalindrome(int num){
      int temp=num, Remainder, reversed_num=0;
  while(num!=0){
     Remainder = num % 10;
     reversed_num = reversed_num*10 + Remainder;
     num /= 10;
  }
  if ( reversed_num == temp ) return 1;
  else return 0;
}

int order(int num){
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int isArmstrong(int num){
  int lastDigit=0,power=0,sum=0,hezka=order(num);
  int temp=num;
  while(temp!=0) {
     lastDigit=temp%10;
     power=pow(lastDigit, hezka);
     sum+=power;
     temp/=10;
  }
  if(sum==num) return 1;
  else return 0;
}

