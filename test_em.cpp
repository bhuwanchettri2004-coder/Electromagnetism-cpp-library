#include <iostream>
#include "em.hpp"

int main()
{
    double q = 1e-6;
    double r = 0.1;
    double I = 5;

    std::cout << "Coulomb Force: "
              << coulomb_force(q, q, r) << " N\n";

    std::cout << "Electric Field: "
              << electric_field(q, r) << " N/C\n";

    std::cout << "Electric Potential: "
              << electric_potential(q, r) << " V\n";

    std::cout << "Biot-Savart Field: "
              << biot_savart(I, 0.01, r) << " T\n";

    std::cout << "Ampere Law: "
              << ampere_law(I) << "\n";

    std::cout << "Gauss Flux: "
              << gauss_flux(q) << "\n";

    return 0;
}

