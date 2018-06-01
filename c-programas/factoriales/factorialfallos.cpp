#include <stdio.h>
#include <stdlib.h>

void multiplo(int a){ // Definicion de numeros
int i;
for (i=a*2;i=100;i=i+a)
printf("%d\n",i);
}
int main(){ // declaracion de los elementos
int i =3;
while(i<= 7){
	printf("\n Multiplos de %d:", i);
	multiplo(i);
	i=i+1;
    return 0;
}
}
