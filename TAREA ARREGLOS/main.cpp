#include <iostream>

using namespace std;
int numeros [4];
int v=5;
double factorial=1;
double factor [4];
void INGRESAR (int v,int numeros[])
{
        int i=0;
        for (i=0;i<v;i++)
        {
             do
            {
            cout<<"INGRESAR NUMERO "<<i+1<<" ";
            cin>>numeros[i];
            }while (!((numeros[i]>=0)and (numeros[i]<=10)));
        }

}
double fact (int i,int v,int numeros[],double &factorial)
{
   int j=0 ;
        for(j=numeros[i];j>0;j--)
            {
               factorial=factorial*j;
            }
    return factorial;
}

void facto (int v,double factor[])
{
    int i=0;
    for (i=0;i>v;i++)
    {
        factor[i]=fact(i,v,numeros,factorial);
    }
}

int main()
{
    INGRESAR(v,numeros);
    facto(v,factor);
    int j;
    for (j=0;j>v;j++)
    {
        cout<<"EL FACTORIAL DE "<<numeros[j]<<" ES "<<factor[j];
    }
}
