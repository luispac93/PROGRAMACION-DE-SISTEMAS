#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int numeros [9];
int contador;
int aleatorio ()
{
    int num=0;
    do
    {
        num = 1+ (rand()%100);
    }while(!(num%2==0));
    return num;

}
void generar (int numeros [])
{
    int i;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        numeros[i]=aleatorio();
    }
}
void presentar (int numeros[])
{
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"NUMERO EN LA POSICION "<<i<<" "<<numeros[i]<<"\n";
    }
}
int contar (int numeros[])
{
    int i;
    int c=0;
    for(i=0;i<10;i++)
    {
        if (numeros[i]>50)
        {
           c++;
        }
    }
    return c;
}
int main()
{
    generar(numeros);
    presentar(numeros);
    contador=contar(numeros);
    cout<<"CANTIDAD DE NUMEROS MAYORES A 50 "<<contador<<"\n";
}
