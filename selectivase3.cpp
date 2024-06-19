//Mayor de 3 numeros.
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    double a, b ,c;
    cout << "Ingrese 3 numeros: "<<endl; cin >> a; cin >> b; cin >> c;
if ((a==b)||(a==c)||(c==b))
    {
        cout << "No pueden ser iguales.";
    }
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
    return 0;
}