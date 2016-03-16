#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int v=5;
int arreglo [4];
int ledson ;
int arregloarduino [4];
void generacion (int arreglo[])
{
    srand(time(0));
    int i;
    for (i=0;i<v;i++)
    {
        arreglo[i]=1+rand()%100;
    }
    for(i=0;i<5;i++)
    {
        cout<<"NUMERO "<<i+1<<" = "<<arreglo[i]<<"\n";

    }
}
int contar (int arreglo[])
{
    int c=0;
    int i;
    for (i=0;i<5;i++)
    {
        if (arreglo[i]==1)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    generacion(arreglo);
    ledson=contar(arreglo);
    cout<<"leds encendidos "<<ledson<<"\n";
}
