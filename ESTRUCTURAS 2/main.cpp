#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct carro
{
    char autos[30];
    int v1,v2,v3;
};
carro car[5];
void ingreso (carro &car)
{
    _flushall();
    cout<<"nombre del alumno ";
    cin.getline(carro.car,30);
    cout<<"Velocidad 1 ";
    cin>>carro.v1;
    cout<<"Velocidad 2 ";
    cin>>carro.v2;
    cout<<"Velocidad 3 ";
    cin>>carro.v3;

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
