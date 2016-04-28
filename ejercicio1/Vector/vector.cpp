#include "vector.h"
#include <cmath>

bool Vector::igualX(Vector v2) {
    return this->getAbsisa() == v2.getAbsisa();
}

bool Vector::igualY(Vector v) {
    return this->getOrdenada() == v.getOrdenada();
}

float Vector::modulo() const {
    return sqrt(pow(this->getOrdenada(),2) + pow(this->getAbsisa(),2));
}

float Vector::prodEscalar(const Vector v) const {
    return this->getAbsisa() * v.getAbsisa() + this->getOrdenada() * v.getOrdenada();
}

void Vector::resta(const Vector v2) {
    float nuevaAbs = this->getAbsisa() - v2.getAbsisa();
    float nuevaOrd = this->getOrdenada() - v2.getOrdenada();
    this->setOrdenada(nuevaOrd);
    this->setAbsisa(nuevaAbs);
}

