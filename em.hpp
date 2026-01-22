#ifndef EM_Hpp
#define EM_Hpp

// Coulomb's Law
double coulomb_force(double q1, double q2, double r);

// Electric Field
double electric_field(double q, double r);

// Electric Potential
double electric_potential(double q, double r);

// Biot-Savart Law
double biot_savart(double I, double dl, double r);

// Ampere's Law
double ampere_law(double I);

// Gauss Law (flux)
double gauss_flux(double q);

#endif