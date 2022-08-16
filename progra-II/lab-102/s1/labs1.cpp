#include <iostream> // Entrada y salida de datos
#include <cmath> // Para funciones matemáticas
#include <iomanip> // Fixed y setpresicion()

using namespace std;

// Variable constantes se escriben en MAYÚSCULA (Buena práctica) - Estas se pueden utilizar en todas las funciones
const double PI=3.1415;

int main(){
    double radio, area, volumen;
    cout << "Radio: ";
    cin >> radio;

    area = 4 * PI * radio * radio;
    volumen = 4.0/3.0 * PI * pow(radio,3);

    cout << endl;
    cout << "El area es ====> " << area << endl;
    cout << "El volumen es ====> " << volumen << endl;

    //--- ahora se indica la cantidad de decimales
    //--- al momento de imprimir el volumen
    cout << "El volumen es ====> " << fixed << setprecision(7) << volumen;

    return 0;
}