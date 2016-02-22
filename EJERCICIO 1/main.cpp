#include <iostream>

using namespace std;
int turno;
double ventas,comision,pcomision,pago;
char nombre [30];



void ingreso(int &turno,double &ventas,char nombre [])
{
    cout<<"INGRESAR NOMBRE DEL EMPLEADO...:";
    cin.getline (nombre,30);
    do
    {
        cout<<"INGRESAR NUMERO DE TURNO...:";
        cin>>turno;
    }while(!((turno>=1) and (turno<=3)));

    cout<<"INGRESAR NUMERO DE VENTAS...:";
    cin>>ventas;

}
double pcom (int turno)
{

    if (turno==1)
    {
       return 0.05;
    }
    if (turno==2)
    {
       return 0.06;
    }
    if (turno==3)
    {
       return 0.04;
    }
}
void vcomision (int turno,double &comision,double &pcomision,double ventas)
{
    pcomision= pcom(turno);
    comision=pcomision*ventas;

}
int main()
{
    ingreso(turno,ventas,nombre);
    vcomision (turno,comision,pcomision,ventas);
    pago=ventas+comision;
    cout<<"EL PAGO TOTAL DE "<<nombre<<"ES "<<pago<<"\n";
    cout<<"LA COMISION ES "<<comision;
}
