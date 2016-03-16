#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int numeros [4];
int mayor=0;
int menor=150;
int aleatorio ()
{
    int num=0;
    do
    {
        num = 50+ (rand()%100);
    }while(!(num%2==0));
    return num;
}
void generar (int numeros [])
{
    int i;
    srand(time(0));
    for (i=0;i<5;i++)
    {
        numeros[i]=aleatorio();
    }
}
void mayormenor (int numeros[],int &mayor,int &menor)
{
    int i;
    for (i=0;i<5;i++)
    {
        if (numeros[i]>mayor)
        {
            mayor=numeros[i];
        }
        if (numeros[i]<menor)
        {
            menor=numeros[i];
        }
    }
}

void presentar (int numeros [])
{
    int i;
    for (i=0;i<5;i++)
    {
        cout<<"EL NUMERO EN LA POSICION "<<i<<" ES "<<numeros[i]<<"\n";
    }
}

int main()
{
    generar(numeros);
    mayormenor(numeros,mayor,menor);
    presentar(numeros);
    cout<<"EL NUMERO MAYOR ES "<<mayor<<"\n";
    cout<<"EL NUMERO MENOR ES "<<menor<<"\n";

}
