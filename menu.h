#ifndef MENU_H
#define MENU_H

#include "facturacion.h"

#include <vector>
#include <string>
#include <iostream>

#include"productoa.h"
#include"productob.h"
#include"productoc.h"

class Menu : public Facturacion
{

private:
    vector<ProductoA *> productos;
    void generarDatos();
    // Creacion de variables para el menu de los combos
public:
    Menu();
    int activarMenu();
    void comprarProductos();
    void mostrarMenu();
    void dulceria();

};

#endif // MENU_H
