#include <iostream>
#include <fstream>
#include <iostream>
#include "VetorialC/src/Interfaces/Vector.h"

using namespace std;

int main()
{
    /** createAVectorTest
     * 
     */
    Vector v(2.0, 3.0, 1.0);

    /**
     * @todo add vector manager to sum, subtract, multiply, etc
     * 
     * Talvez criar um VetorCollection
     */
    ofstream outfile;
    outfile.open("vetor2d.p");

    outfile << "set arrow 1 from 0,0 to 0.5,0.5 \n";
    outfile << "set arrow 2 from 0,0 to 1.5,0.5 \n";
    outfile << "set xr[0.0:10.0] \n";
    outfile << "set yr[0.0:10.0] \n";
    outfile << "f(x) = 0 \n";
    outfile << "plot f(x)";
    outfile.close();

    /**
     * @todo write a plot file.
     * 
     * Plotter aceita um VetorCollection
     */

    /**
     *
     *
     */
    system("gnuplot \'vetor2d.p\' -persist");
    
    return 0;
}