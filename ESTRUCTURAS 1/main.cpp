#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct alumno
{
    char nombre[30];;
    int p1,p2,p3,promedio;
    char obs[15];
};
alumno alum[5];


void ingreso (alumno &alum)
{
    _flushall();
    cout<<"nombre del alumno ";
    cin.getline(alum.nombre,30);
    cout<<"Parcial 1 ";
    cin>>alum.p1;
    cout<<"Parcial 2 ";
    cin>>alum.p2;
    cout<<"Parcial 3 ";
    cin>>alum.p3;

}
void calcular (alumno &alum)
{
    alum.promedio=( alum.p1+ alum.p2+ alum.p3)/3;
    if (alum.promedio>=60)
    {
        strcpy(alum.obs,"APROBADO");
    }
    else
    {
        strcpy(alum.obs,"REPROBADO");
    }
}
void presentar  (alumno alum)
{
    cout<<"ALUMNO "<<alum.nombre<<" nota: "<<alum.promedio<<" obs "<<alum.obs<<"\n";
}
void ingresoa (alumno alum[])
{
    for (int i=0;i<5;i++)
    {
        ingreso(alum[i]);
    }
}
void calculara (alumno alum[])
{
    for (int i=0;i<5;i++)
    {
        calcular(alum[i]);
    }
}
void presentara (alumno alum[])
{
    for (int i=0;i<5;i++)
    {
        presentar(alum[i]);
    }
}
int main()
{
    ingresoa(alum);
    calculara(alum);
    presentara(alum);
}
