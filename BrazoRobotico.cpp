#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando) : x(x), y(y), z(z), sujetando(sujetando) {}

double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetando() const { return sujetando; }

void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
        std::cout << "Objeto cogido." << std::endl;
    } else {
        std::cout << "Ya estás sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {
        std::cout << "No estás sujetando ningún objeto." << std::endl;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "Brazo movido a la posición (" << x << ", " << y << ", " << z << ")." << std::endl;
}

