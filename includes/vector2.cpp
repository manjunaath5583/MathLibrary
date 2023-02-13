#include <math.h>
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
    DIVISON OF VECTORS (SCALAR)

    vector a = xi + yj;
    a/2 = (x/2)i + (y/2)j #VECTOR
*/
Vector2 Vector2::operator/(double Magnitude)
{
    X_COMPONENT /= Magnitude;
    Y_COMPONENT /= Magnitude;

    return *this;
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

bool Vector2::operator!=(const Vector2 &other) const
{

    return !(Vector2::operator==(other));
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

/*
    ZERO OR NULL VECTOR
    A vector whose magnitude is Zero and direcction less
*/
Vector2 Vector2::zeroVector()
{

    this->X_COMPONENT = 0;
    this->Y_COMPONENT = 0;

    return *this;
}

/*
    MAGNITUDE OF THE VECTOR
    Magnitude = sqrt(x^2 + y^2)
*/
double Vector2::magnitudeOfVector()
{
    this->MAGNITUDE = sqrt(pow(this->X_COMPONENT, 2) + pow(this->Y_COMPONENT, 2));
    return this->MAGNITUDE;
}

/*
    UNIT VECTOR
    unitVector = vector/magnitude
*/
Vector2 Vector2::unitVector()
{
    this->MAGNITUDE = magnitudeOfVector();
    Vector2 unitVector = *this / this->MAGNITUDE;
    return unitVector;
}

/*
    DISTANCE BETWEEN 2 VECTORS
    a = x1i + y1j
    b = x2i + y2j
    distance = mag(a-b)
    distance = sqrt((x2-x1)^2 + (y2-y1)^2);
*/
double distanceBwVectors(Vector2 vector1, Vector2 vector2)
{
    return sqrt(pow((vector1.X_COMPONENT - vector2.X_COMPONENT), 2 + (vector1.Y_COMPONENT - vector2.Y_COMPONENT)));
}

/*
    DIRECTION OF VECTOR
    a = xi + yj
    direction(radins) = atan(y/x)
*/
double Vector2::directionOfVector()
{
    this->DIRECTION = atan(this->Y_COMPONENT / this->X_COMPONENT);
    return this->DIRECTION;
}

/*
    ANGLE BETWEEN TWO VECTORS
    a, b are 2 vectors
    angle = arcos(a.b/|a|.|b|)
*/
double angleBwVectors(Vector2 vector1, Vector2 vector2)
{
    return acos((vector1 * vector2) / (vector1.MAGNITUDE * vector2.MAGNITUDE));
}