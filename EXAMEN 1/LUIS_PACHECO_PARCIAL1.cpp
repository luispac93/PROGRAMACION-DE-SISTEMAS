#include <iostream>

using namespace std;
int zona,bono;
char  nombre [30];
double porcomision,ventas,comision;
void inicio ( int &zona, double &ventas, char nombre[])
{
    cout<<"INGRESAR NOMBRE DEL EMPLEADO ";
    cin.getline(nombre,30);
    cout<<"INGRESAR NUMERO DE VENTAS ";
    cin>>ventas;
    do
    {
      cout<<"INGRESAR ZONA DE TRABAJO ";
      cin>>zona;
    }while(!((zona>=1)and(zona<=3)));
}
double porcentajedecomision (double ventas)
{
    if ((ventas>=1)and (ventas<=20000))
    {
        return 0.04;
    }
    if ((ventas>=20001)and (ventas<=50000))
    {
        return 0.05;
    }
    if (ventas>=50001)
    {
        return 0.06;
    }
}
void calculos (double &porcomision,double &comision,double ventas,int zona, int &bono)
{
    porcomision= porcentajedecomision(ventas);
    comision=porcomision*ventas;
    if (((zona==1) or (zona==3)) and (ventas>30000))
    {
        bono=500;
    }

    if (zona==2 and ventas>40000)
    {
        bono=600;
    }
}
int main()
{
    inicio(zona,ventas,nombre);
    calculos(porcomision,comision,ventas,zona,bono);
    cout<<"EL PORCENTAJE DE COMISION DE "<<nombre<<" ES "<<porcomision<<"\n";
    cout<<"LA COMISION ES "<<comision<<"\n";
    cout<<"EL BONO ES "<<bono<<"\n";

}
