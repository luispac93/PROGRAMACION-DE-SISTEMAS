#include <iostream>

using namespace std;
int numeros [4];
int v=5;

void INGRESAR (int v,int numeros[])
{
        int i=0;
    for (i=0;i<v;i++)
    {
        cout<<"INGRESAR NUMERO ";
        cin>>numeros[i];
    }
}

void PRESENTAR (int v,int numeros [])
{
    int i=0;
    for (i=0;i<v;i++)
    {
        cout<<"NUMERO "<<i+1<<" ="<<numeros [i]<<"\n";

    }

}
int MAYOR (int v,int numero [])
{
    int i;
    int nmayor;
     for (i=0;i<v;i++)
     {
         if (numero[i]>nmayor)
         {
             nmayor=numero [i];
         }
     }
     return nmayor;
}
int MENOR (int v,int numero [])
{
    int i;
    int nmenor=numero [0];
     for (i=0;i<v;i++)
     {
         if (numero[i]<nmenor)
         {
             nmenor=numero [i];
         }
     }
     return nmenor;
}
int main ()
{
    int may;
    int men;
    INGRESAR (v,numeros);
    PRESENTAR(v,numeros);
    may=MAYOR (v,numeros);
    men=MENOR (v,numeros);
    cout<<"EL NUMERO MAYOR ES "<<may<<"\n";
    cout<<"EL NUMERO MENOR ES "<<men<<"\n";
}
