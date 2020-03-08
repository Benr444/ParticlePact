#include "../include/Vector2.h"

double ParticlePact::Vector2::getX() const
{
    return x;
}

void ParticlePact::Vector2::setX(double newX)
{
    x = newX;
}

double ParticlePact::Vector2::getY() const
{
    return y;
}

void ParticlePact::Vector2::setY(double newY)
{
    y = newY;
}

double ParticlePact::Vector2::getMagnitude() const
{
    return std::sqrt(std::pow(x, 2) + std::pow(y, 2)); 
}

void ParticlePact::Vector2::normalize()
{
    const double m = getMagnitude();
    x /= m;
    y /= m;
}

double ParticlePact::Vector2::distanceTo(const Vector2 &a) const
{
    return (a - *this).getMagnitude();
}

// Returns true if the current vector is within the given distance of the second vector
bool ParticlePact::Vector2::within(double distance, const Vector2 &a) const
{
    return (a.distanceTo(*this) <= distance);
}                           