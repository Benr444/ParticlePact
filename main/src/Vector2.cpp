#include "..\include\Vector2.h"

using namespace ParticlePact;


Vector2::Vector2() : x(0), y(0) {} // Initialize both values to zero

Vector2::~Vector2() {}

// Initialize both values to the passed values
Vector2::Vector2(double xInit, double yInit) : x(xInit), y(yInit) {}

double Vector2::getX() const
{
    return x;
}

void Vector2::setX(double newX)
{
    x = newX;
}

double Vector2::getY() const
{
    return y;
}

void Vector2::setY(double newY)
{
    y = newY;
}

double Vector2::getMagnitude() const
{
    return std::sqrt(std::pow(x, 2) + std::pow(y, 2)); 
}

void Vector2::normalize()
{
    double m = getMagnitude();
    x /= m;
    y /= m;
}

// The passed vector is considered the "final" vector in the formula "delta = final - initial"
double Vector2::distanceTo(const Vector2 &a) const
{
    return (a - *this).getMagnitude();
}

// Returns true if the current vector is within the given distance of the second vector
bool Vector2::within(double distance, const Vector2 &a) const
{
    return (a.distanceTo(*this) <= distance);
}

//
// These operator overloads are outside the class to allow greater precision in definition
//

Vector2 operator+(Vector2 const &a, Vector2 const &b)
{
    return Vector2(a.getX() + b.getX(), a.getY() + b.getY());
}

Vector2 operator*(double const f, Vector2 const &b)
{
    return Vector2(f * b.getX(), f * b.getY());
}

Vector2 operator-(Vector2 const &a, Vector2 const &b)
{
    return a + (-1.0 * b);
}

// This operator just reverses the order of the other (*) operator
Vector2 operator*(Vector2 const &b, float const f)
{
    return f * b;
}

// Called "dot" instead of just multiplication so it's use is more explicit
Vector2 dot(Vector2 const &a, Vector2 const &b)
{
    return Vector2(a.getX() * b.getX(), a.getY() * b.getY());
}

std::ostream& operator<<(std::ostream &stream, Vector2 const &a)
{
    return stream << "[" << a.getX() << ", " << a.getY() << "]";
}