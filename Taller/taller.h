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
    std::vector<Cliente*> _clientes;

public:
    Taller();
    Taller(QString _n);
    ~Taller();

    void setNombre(QString &_n);
    void setDireccion(QString &_d);
    void setTelefono(QString &_t);
    Cliente registrarCliente(Cliente &_c);
};

#endif // TALLER_H
