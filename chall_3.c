#include <stdio.h>
 int pgcd(int a,int b) {
   int c = a % b; 
   if( c != 0 ) { 
      return pgcd(b,c);
   }else{
      return b;
   }
}
 int main (){
    int a = 0;
    int b = 0;
    int pg = 0;
    int so = 0;
    printf("enter number 1:");
    scanf("%d", &a);
    printf("enter number 2:");
    scanf("%d", &b);
    if( a > b) {
      pg = pgcd(a,b);
   
    }else{
      so = a;
      a = b;
      b = so;
      pg = pgcd(a,b);

    }
    printf("le some  :%d", pg);
 }