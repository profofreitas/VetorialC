#include <string>
using std::string;

class Vector { 
        public:
                /**
                 * @autor: prof.ofreitas@gmail.com
                 */
                Vector(double, double, double);
                double getMagnitude();
                Vector normalized();
                void setX(double);
                double getX();

        private:
                double coordinates[3];
                double magnitude;
};