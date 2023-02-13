#include "Vector2.h"

/*
    ADDITION OF VECTORS
    vector a = x1i + y1j
    vector b = x2i + y2j

    vector c = (x1+x2)i + (y1+y2)j; #VECTOR
*/
Vector2 Vector2::operator+(const Vector2 &other)
{
    Vector2 resultVector;

    resultVector.X_COMPONENT = X_COMPONENT + other.X_COMPONENT; // Adds X components
    resultVector.Y_COMPONENT = Y_COMPONENT + other.Y_COMPONENT; // Adds Y components

    return resultVector;
}

/*
    SUBRACTION OF VECTORS
    vector a = x1i + y1j
    vector b = x2i + y2j

    vector c = (x1-x2)i + (y1-y2)j; #VECTOR
*/
Vector2 Vector2::operator-(const Vector2 &other)
{
    Vector2 resultVector;

    resultVector.X_COMPONENT = X_COMPONENT - other.X_COMPONENT; // Subracts X components
    resultVector.Y_COMPONENT = Y_COMPONENT - other.Y_COMPONENT; // Subracts Y components

    return resultVector;
}

/*
    MULTIPLICATION OF VECTORS (DOT PRODUCT)
    vector a = x1i + y1j
    vector b = x2i + y2j

    vector c = (x1*2) + (y1*y2); //SCALAR
*/
double Vector2::operator*(const Vector2 &other)
{

    double resultDotProduct;

    resultDotProduct = (X_COMPONENT * other.X_COMPONENT) + (Y_COMPONENT * other.Y_COMPONENT);

    return resultDotProduct;
}

/*
    COMPARISON OF VECTORS
    vector a = x1i + y1j
    vector b = x2i + y2j

    a == b if x1 == x2 && y1 == y2
*/
bool Vector2::operator==(const Vector2 &other) const
{

    if ((X_COMPONENT == other.X_COMPONENT) && (Y_COMPONENT == other.Y_COMPONENT))
    {
        return true;
    }

    return false;
}

/*
    PRINTS OUTPUT
    Vector2 a = xi + yj;

    (x,y) #OUTPUT
*/
std::ostream &operator<<(std::ostream &stream, const Vector2 &other)
{
    stream << "(" << other.X_COMPONENT << "," << other.Y_COMPONENT << ")";
}
