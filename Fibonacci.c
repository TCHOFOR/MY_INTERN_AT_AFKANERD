#include <stdio.h>

int Fib ( int n ) {
 if ( n <= 1 ) {
 return 1;
 } else {
return Fib((n-1) + (n-2));
  }
}
int main ( ) {
int num;
printf("\nFIBONACCI COMPUTATION");
printf("\nEnter the Number: ");
scanf("%d",&num);
printf("The number is %d ",num);
int ans = Fib(num);
printf("The Fib of %d is %d",num,ans);
return 0;
}
