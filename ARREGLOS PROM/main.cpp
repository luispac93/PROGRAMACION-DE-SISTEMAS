#include <iostream>

using namespace std;
int numeros [4];
int v=5;
float suma=0;
float pro=0;
int numpares;
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
float PROM (int v,int numero[],float suma)
{
    int i;
    float promedio=0;
    for (i=0;i<v;i++)
    {
        suma=suma+numero[i];
    }
    promedio=suma/5;
    return promedio;
}
int PARES (int v,int numero[])
{
    int i;
    int c=0;
    for (i=0;i<v;i++)
    {
        if ((numero[i]%2)==0)
        {
            c++;
        }
    }
    return c;
}

int main()
{
   INGRESAR(v,numeros);
   PRESENTAR(v,numeros);
   pro=PROM(v,numeros,suma);
   numpares=PARES(v,numeros);
   cout<<"EL PROMEDIO ES "<<pro<<"\n";
   cout<<"EL NUMERO DE PARES ES "<<numpares<<"\n";

}
