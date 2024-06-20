//Existencia de un triangulo y su tipo.
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    //Leyendo valores.
    int a, b, c;
    cout << "Ingrese 3 lados: "<<endl; cin >> a; cin >> b; cin >> c;
    //Formula de la existencia de un triangulo.
    if (((b-c) < a) && (a < (b+c))||((a-c) < b) && (b < (a+c))||((a-b) < c) && (c < (a+b)))
    {
       if (a==b&&b==c&&a==c)
       {
        cout << "El triangulo existe.\n" << "Es equilatero.";
       }
       
       else if (a!=b && b!=c && a!=c)
       {
        cout << "El triangulo existe.\n" << "Es escaleno.";
       }
       else if (a==b||b==c||a==c)
       {
        cout << "El triangulo existe.\n" << "Es isoceles.";
       }
       
    // Inexistencia del triangulo.
    } else
    {
        cout << "El triangulo no existe.";
    }
    return 0;
}