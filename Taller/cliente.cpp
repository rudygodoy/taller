#include "cliente.h"

Cliente::Cliente()
{
}

void Cliente::setNombre(QString _n){
    this->_nombre = _n;
    return;
}

void Cliente::setDireccion(QString _d){
    this->_direccion = _d;
    return;
}

void Cliente::setTelefono(QString _t){
    this->_telefono = _t;
}

void Cliente::registrarAuto(Auto * _a){
    this->_autos.push_back(_a);
}
