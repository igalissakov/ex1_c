 #include <stdio.h>
int isStrong(int num) {
 int i,factorial,digit,sum=0,temp;
 temp=num;
 while(num){
     i=1,factorial=1;
     digit=num%10;
     while(i<=digit)    {
        factorial*=i;
        i++;
     }
     sum+=factorial;
     num=num/10;
}
 if(sum==temp) return 1;
 else return 0; 
}
int isPrime(int num){
   for (int i=2; i < num; i++)   { 
      if ( num%i == 0 ) return 0;
   }
   return 1;
}

