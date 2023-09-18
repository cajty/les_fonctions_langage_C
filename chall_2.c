#include <stdio.h>
 int Somme(int a,int b) {
    return a + b;
}
 int main (){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("enter number 1:");
    scanf("%d", &a);
    printf("enter number 2:");
    scanf("%d", &b);
    c = Somme(a,b);
   printf("le some de %d et %d est :%d", a, b, c);
 }