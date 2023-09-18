#include <stdio.h>
int max_2 (int num1, int num2 ) {
  if( num1 >= num2){
  return num1;
}else{
return num2;
} 
}
int max_4 (int a, int b, int c, int d) {
    int re1 = max_2(a,b);
    int re2 = max_2(c,d);
    int ref = max_2(re1, re2);
    
}
 int main (){
    int mun1 = 0;
    int num2 = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    printf("enter number 1:");
    scanf("%d", &a);
    printf("enter number 2:");
    scanf("%d", &b);printf("enter number 1:");
    scanf("%d", &c);
    printf("enter number 2:");
    scanf("%d", &d);
    int max = max_4(a,b,c,d);
    printf("le max est %d",max);
   
 }