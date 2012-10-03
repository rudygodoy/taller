#include "taller.h"

Taller::Taller()
{
}

Taller::Taller(QString _n){
    _nombre = _n;
}

void Taller::setNombre(QString &_n){
    this->_nombre = _n;
    return;
}

void Taller::setDireccion(QString &_d){
    this->_direccion = _d;
    return;
}

void Taller::setTelefono(QString &_t){
    this->_telefono = _t;
    return;
}

Cliente Taller::registrarCliente(Cliente & _c){
    Cliente c = _c;
    return c;
}

