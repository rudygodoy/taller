#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>
#include <vector>
#include "auto.h"

class Cliente
{
    QString _nombre;
    QString _direccion;
    QString _telefono;
    std::vector<Auto*> _autos;

public:
    Cliente();
    ~Cliente();

    void setNombre(QString _n);
    void setDireccion(QString _d);
    void setTelefono(QString _t);
    void registrarAuto(Auto * _a);
};

#endif // CLIENTE_H
