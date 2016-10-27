#include<stdio.h>
 #include<stdlib.h>
 int main ()
 {
 int num,op,pot,a=1;
 system("color 8f");
 printf("Ingrese el n%cmero a sacar la potencia:",163);
 scanf("%i",&num);
 printf("Ingrese la potencia:");
 scanf("%i",&pot);
 for (op=1;op<=pot;op++)
 {
 a=a*num;
 }
 printf("El resultado es:%i\n\t",a);
 system("PAUSE");
 return 0;
 }
