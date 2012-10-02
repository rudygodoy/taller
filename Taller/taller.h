#ifndef TALLER_H
#define TALLER_H
#include <QString>
#include <vector>
#include "cliente.h"

class Taller
{
    QString _nombre;
    QString _direccion;
    QString _telefono;
    std::vector<Cliente> _clientes;

public:
    Taller();
};

#endif // TALLER_H
