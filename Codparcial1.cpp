#include <iostream>
using namespace std;

int main()
{

    float x = 0.0, y = 0.0, z = 0.0;

    cout << "Una bombilla LED para un automovil esta disenada para conectarse a una bateria de X voltaje" << endl;
    cout << "Para determinar el valor de la corriente electrica debe proporcionar los datos del voltaje y corriente." << endl;

    cout << "Ingrese el valor del voltaje: ";
    cin >> x;

    cout << "Ingrese el valor de la resistencia: ";
    cin >> y;

    if (x <= 0 || y <= 0)
    {
        cout << "El dato es erroneo";
    }
    else
    {

        z = x / y;

        cout << "El valor de la corriente electrica que circula a traves de ella al encenderse es: " << z;
    }

    return 0;
}
