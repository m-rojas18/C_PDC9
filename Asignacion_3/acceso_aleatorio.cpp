#include <iostream> // acceso_aleratorio.cpp
#include <fstream>
#include <cstdlib>
#include "Contacto.cpp"
#include "Operaciones.cpp"
using namespace std;

int main() {
    Operaciones *operacion;

    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary );
    operacion->escribir_o_leer(fcont,true);
    cout << "ANTES:" << endl;
    operacion->escribir_o_leer(fcont,false);
    cout << endl << "CAMBIOS:" << endl;
    operacion->cambios(fcont);
    cout << endl << "DESPUES:" << endl;
    operacion->escribir_o_leer(fcont, false);
}