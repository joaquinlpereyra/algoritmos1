#include "surtidor.h"

void Surtidor::expender(int cant) {
    int disponible = this->litrosDisponibles();
    this->setLtsDisponibles(disponible-cant);
}
