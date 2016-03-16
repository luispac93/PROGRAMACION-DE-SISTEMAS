#include <iostream>

using namespace std;

int numeros [5];
int mayor;
int menor;
double promedio;

void ingreso (int numeros[])
{
    for (int i=0;i<5;i++)
    {
        do
        {
            cout<<"INGRESAR NUMERO "<<i+1<<" ";
            cin>>numeros[i];
        }while(!((numeros[i]%2==0) and (numeros[i]>50)));
    }
}
int nmayor (int numeros[])
{
    int m=0;
    for (int i=0;i<5;i++)
    {
        if (numeros[i]>m)
        {
            m=numeros[i];
        }
    }
    return m;
}

double prom (int numeros[])
{
    int suma =0;
    int s=0;
    double pro;
    for (int i=0;i<5;i++)
    {
        if ((numeros[i]%5)==0)
        {
            suma=suma+numeros[i];
            s++;
        }
    }
    if (s>0)
    {
        pro=suma/s;
    }
    else
    {
        pro=0;
    }
    return pro;
}

void nmenor (int numeros[],int &menor)
{
    menor =numeros[0];
    for (int i=0;i<5;i++)
    {
        if (numeros[i]<menor)
        {
            menor=numeros[i];
        }
    }
}

int main()
{
   ingreso(numeros);
   mayor=nmayor(numeros);
   promedio=prom(numeros);
   nmenor(numeros,menor);
   for (int i=0;i<5;i++)
    {
        cout<<"NUMERO "<<i+1<<"= "<<numeros[i]<<"\n";
    }
    cout<<"EL NUMERO MAYOR ES "<<mayor<<"\n";
    cout<<"EL NUMERO MENOR ES "<<menor<<"\n";
    cout<<"EL PROMEDIO DE LOS MULTIPLOS DE 5 ES "<<promedio<<"\n";

}
