#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int lin=5;
const int col=4;
int numeros [lin][col];

void ingreso (int numeros[lin][col])
{
    srand(time(0));
    for (int i=0;i<lin-1;i++)
    {
        for(int j=0;j<col;j++)
        {
            numeros[i][j]=1+rand()%100;
        }
    }
}
void prom(int numeros[lin][col])
{
    int ul=lin-1;
    for (int i=0;i<col;i++)
    {
        int par=0;
        int suma=0;
        for(int j=0;j<lin-1;j++)
        {
            if (numeros[j][i]%2==0)
            {
                par++;
                suma+=numeros[j][i];
            }
        }
        if (par>0)
        {
            numeros[ul][i]=suma/par;
        }
    }
}

void ingreso2 (int numeros[lin][col])
{
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<lin;j++)
        {
            cout<<"NUMERO ["<<i<<"] ["<<j<<"]...";
            cin>>numeros[i][j];
        }
    }
}
void presentar (int numeros[lin][col])
{
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    ingreso(numeros);
    prom(numeros);
    presentar(numeros);
}

