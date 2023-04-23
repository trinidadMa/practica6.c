#include<stdio.h>
#include "cadenas.h"

int buscar(char c, char *cadena);
int main()
{
char cadena[100];
char caracter; int resultado;

printf("ingrese una cadena:\n");
scanf("%s", cadena);
printf("Ingrese el caracter que desee buscar:\n");
scanf(" %c", &caracter);

resultado=buscar(caracter,cadena);
if (resultado == -1)
{

printf("el caracter que ingreso no se encuentra en la cadena\n");

    
} else {
printf("el caracter que ingreso se encuentra en la posicion %d\n", resultado);
}
return 0;
}
