#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int lin=3;
const int col=3;
int numeros [lin][col];
int arduino [lin][col];
int g;
void ingreso (int numeros[lin][col],int arduino [lin][col])
{
    srand(time(0));
    int c=10;

    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            arduino[i][j]=c;
            numeros[i][j]=rand()%2;
            c++;
        }
    }
}
void presentar (int numeros[lin][col],int arduino [lin][col])
{
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arduino [i][j]<<" ";
        }
        cout<<"\n";
    }
}
void encender (int numeros[lin][col])
{
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            if (numeros[i][j]==1)
            {

            }
        }

    }
}
void analsis (int numeros[lin][col],int &g)
{
    if((numeros[0][0]==1 and numeros[0][1]==1 and numeros[0][2]==1)or(numeros[1][0]==1 and numeros[1][1]==1 and numeros[1][2]==1)or(numeros[2][0]==1 and numeros[2][1]==1 and numeros[2][2]==1))
    {
        g=2;
    }
}

int main()
{
    ingreso(numeros,arduino);
    presentar(numeros,arduino);
    analsis(numeros,g);
    cout<<g;
}
