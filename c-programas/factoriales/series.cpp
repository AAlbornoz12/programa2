#include <stdio.h>
#include <stdlib.h>
#define NMAX 19
int valor [NMAX];
int NumeroItems;
int ObtenerValorParaCalculo();
void RellenaArray(int numero);
long ValorSumatorio(int NumeroItemsSum); 
long ValorProducto(int NumeroItemsProd);
int main(){
	int ValorParaCalculo=0;
	int OpcionUsuario=1;
	while(OpcionUsuario!=4){
		printf("\n\n1: Introducir Valor\n2: Calular la serie entre 1+3+5....\n");
		printf("3:Calular la serie 1*3*5....\n4: Salir\n\n Elija opcion:");
		scanf("")
	}

    return 0;
}
