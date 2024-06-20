//Mayor de 3 numeros.
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
//  Leyendo 3 valores.
    double a, b ,c;
    cout << "Ingrese 3 numeros: "<<endl; cin >> a; cin >> b; cin >> c;
// Casos inválidos.
if ((a==b)||(a==c)||(c==b))
    {
        cout << "No pueden ser iguales.";
    }
// Identificación de numeros mayores.
else
{
     if ((a<b)&&(c<b))
    {
        cout << "El numero mayor es: "<< b;
    }
    else if ((b<a)&&(c<a)){
        cout << "El numero mayor es: " << a;
    }
    else if ((b<c)&&(a<c)){
        cout << "El numero mayor es: " << c;
    }

}
    return EXIT_SUCCESS;
}