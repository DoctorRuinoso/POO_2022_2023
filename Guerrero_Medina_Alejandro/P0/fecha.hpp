#ifndef FECHA_HPP_
#define FECHA_HPP_

#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

class Fecha {
public:
    //Variables Constantes.
    static const int AnnoMinimo = 1907;
    static const int AnnoMaximo = 2037;

    //Constructores.
    Fecha (int dia = 0, int mes = 0, int anno = 0);     //Constructor estándar.
    Fecha (const char * date);      //Constructor.
    
    //Observadores.
    int dia() const;        //Método observador dia()
    int mes() const;        //Método observador mes()
    int anno() const;       //Método observador anno()
    ~Fecha();               //Destructor.
private:
    int dia,
        mes,
        anno;
};

#endif