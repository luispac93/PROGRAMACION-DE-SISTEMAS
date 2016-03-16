#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct emp
{
    char nombre[30];;
    int ventas [3];
    double total,comis,tp;
};
emp empleados[4];

void ingreso (emp empleados[])
{
    int i,k;
    for (i=0;i<5;i++)
    {
        cout<<"NOIMBRE DEL EMPLEADO ";
        cin.getline(empleados[i].nombre,30);
        for (k=0;k<3;k++)
        {
            cout<<"INGRESAR LA VENTA "<<k<<" ";
            cin>>empleados[i].ventas[k];
        }
        _flushall();
    }
}
void calculos (emp empleados[])
{

    int i,k;
    for (i=0;i<5;i++)
    {
        empleados[i].total=0;
        for (k=0;k<3;k++)
            {
                empleados[i].total=empleados[i].total+empleados[i].ventas[k];
            }
            empleados[i].comis=0.05*empleados[i].total;
    }
}
void presentar (emp empleados[])
{
    int i,k;
    for (i=0;i<5;i++)
    {
        cout<<"EMPLEADO "<<empleados[i].nombre<<"\n";
        for (k=0;k<3;k++)
        {
            cout<<" VENTA "<<k+1<<" "<<empleados[i].ventas[k]<<"\n";
        }
        cout<<"TOTAL VENTAS "<<empleados[i].total<<"\n";
        cout<<"COMISION "<<empleados[i].comis<<"\n";
        cout<<"\n";
        }

}
int main()
{
ingreso(empleados);
calculos(empleados);
presentar(empleados);
}
