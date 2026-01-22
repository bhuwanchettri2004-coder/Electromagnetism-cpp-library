#include <fstream>
#include "em.hpp"

int main() {
    std::ofstream file("data/coulomb.dat");

    double q1 = 1e-6, q2 = 1e-6;

    for(double r = 0.01; r <= 0.5; r += 0.01) {
        file << r << " " << coulomb_force(q1, q2, r) << "\n";
    }

    file.close();
    return 0;
}