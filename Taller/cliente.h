#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>
#include <vector>
#include "vehiculo.h"

class Cliente
{
    QString _nombre;
    QString _direccion;
    QString _telefono;
    std::vector<Vehiculo> _vehiculos;

public:
    Cliente();
};

#endif // CLIENTE_H
