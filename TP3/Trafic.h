#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Trafic :
    public Vehiculo
{
    static float preciodia;

public:
    Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza,int capacidad);
    ~Trafic();
    virtual void PasosMantenimiento();
    string tostring();
    float getprecioDia();

};

