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
void sumarc(int numeros[lin][col])
{
    int ul=lin-1;
    for (int i=0;i<col;i++)
    {
        for(int j=0;j<lin-1;j++)
        {
            numeros[ul][j]+=numeros[i][j];
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
