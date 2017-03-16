
#include <iostream>

class Vector
{
    public:
        double x;
        double y;
        double z;

        Vector() {};
        Vector(double x, double y, double z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        };

        friend std::ostream& operator<<(std::ostream& os, const Vector& v)
        {
            os << "(";
            os << v.x;
            os << ",";
            os << v.y;
            os << ",";
            os << v.z;
            os << ")";
            return os;
        };

};