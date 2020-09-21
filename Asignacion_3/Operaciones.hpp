#pragma once
#include "Contacto.hpp"
#include <fstream>
#include <cstdlib>

using namespace std;

class Operaciones {
    public:
        void escribir_o_leer(fstream&, bool);
        void leer_el_3(fstream&, Contacto&); 
        void escribir_el_3(fstream&, Contacto&); 
        void cambios(fstream&); 
};