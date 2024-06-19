//Combinatoria. C = m! / n! (m-n)!. 
#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int);
int main(){
    int m, n;
    cout << "COMBINATORIA\n"; 
    cout << "Ingrese el valor de m: "; cin >> m;
    cout << "Ingrese el valor de n: "; cin >> n;
    cout << "C = m! / n! (m-n)!\n"; 
    cout << "C = " << factorial(m) / factorial(n) * factorial(m-n);
    
    return EXIT_SUCCESS;
}
int factorial(int a){
    if (a > 1)
    {
        return a * factorial(a - 1);
    }
    else 
    {
        return 1;
    }    
}

