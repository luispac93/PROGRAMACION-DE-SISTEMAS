#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;
    int num = 0;
    int suma=0;
    int contador=0;
    int mayor = 0;
    int promedio = 0;
    int contaPar = 0;
    do {
            do{
            cout<<"Ingrese un numero entre 50 y 100..." ;
            cin>> num;

            }while(!((num>=50) && (num<=100)));
            if ((num>=80) && (num<=100)){
            suma += num;
            contador ++;
            }
            if (num%2==0){
                contaPar++;
            }
            if (num>mayor){
                mayor=num;
            }
            _flushall();
            do {
            cout<<"Desea continuar?..." ;
            cin.get(resp);
            _flushall();
        } while ((toupper(resp)!='S') && (toupper(resp)!='N'));
    } while (toupper(resp)=='S');

    if (contador>0){
        promedio = suma/contador;
        cout<<"Promedio  "<<promedio<<"\n";
    } else {
        cout<<"Promedio= 0 \n";
    }
    cout<<"Numero mayor:"<<mayor;

    return 0;
}
