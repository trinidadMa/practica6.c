#define cadenas .h
int buscar(char c, char *cadena)
{
int i;

for (i = 0; cadena[i] != '\0'; i++)
{
if (cadena[i] == c)
{

return i;
}
}
return -1;
}
