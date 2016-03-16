#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int lin=3;
const int col=4;
int numeros [lin][col];

void ingreso (int numeros[lin][col])
{
    srand(time(0));
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col-1;j++)
        {
            numeros[i][j]=1+rand()%100;
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
void mayor (int numeros[lin][col])
{
    int uc=col-1;
    for (int a=0;a<3;a++)
    {
        numeros[a][uc]=0;
    }
    for(int i=0;i<lin;i++)
    {
        for(int j=0;j<col-1;j++)
        {
            if(numeros[i][j]>numeros[i][uc])
            {
                numeros[i][uc]=numeros[i][j];
            }
        }
    }
}
int main()
{
    ingreso(numeros);
    presentar(numeros);

}
