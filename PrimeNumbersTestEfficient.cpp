#include<stdio.h>
#include<conio.h>
int main()
{
   int n, i = 3, count, c;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ; count++ )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
           break;
      }
      if ( c == i )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }
 
   return 0;
   getch();
}