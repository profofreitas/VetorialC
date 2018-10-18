/**
 * Vector Interface
 * 
 * What does it really do?
 * 
 * @autor: prof.ofreitas@gmail.com
 */

class Vector { 
        public:
                /**
                 * Virtual Functions
                 * 
                 * @autor: prof.ofreitas@gmail.com
                 */
                virtual double getMagnitude() = 0;
                virtual Vector normalized() = 0;

        private:
                /**
                 * Private members 
                 */
                double x_coordinate;
                double y_coordinate;
                double z_coordinate;

                double magnitude;
}
