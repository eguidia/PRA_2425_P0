#include "BrazoRobotico.h"
#include <iostream>

int main() {
    BrazoRobotico brazo(0, 0, 0);
    brazo.mover(5, 5, 5);
    brazo.coger();
    brazo.mover(10, 10, 10);
    brazo.soltar();
    return 0;
}

