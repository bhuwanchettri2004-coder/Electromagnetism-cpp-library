#include "em.hpp"
#include <cmath>

const double k = 8.9875517923e9;   // Coulomb constant
const double mu0 = 4 * M_PI * 1e-7;
const double eps0 = 8.854187817e-12;

// Coulomb Force
double coulomb_force(double q1, double q2, double r)
{
    return k * q1 * q2 / (r * r);
}

// Electric Field
double electric_field(double q, double r)
{
    return k * q / (r * r);
}

// Electric Potential
double electric_potential(double q, double r)
{
    return k * q / r;
}

// Biot-Savart Law
double biot_savart(double I, double dl, double r)
{
    return (mu0 / (4 * M_PI)) * (I * dl / (r * r));
}

// Ampere's Law
double ampere_law(double I)
{
    return mu0 * I;
}

// Gauss's Law
double gauss_flux(double q)
{
    return q / eps0;
}