#include "projector.hpp"

Projector::Projector()
    : position{0, 0, 0}
{
}

Projector::Projector(float X, float Y, float Z)
    : position{X, Y, Z}
{
}

void Projector::setPosition (float X, float Y, float Z)
{
    position.x = X;
    position.y = Y;
    position.z = Z;
}

void Projector::setPosition(const Vec3& newPosition)
{
    position = newPosition;
}

const Vec3& Projector::getPosition() const
{
    return position;
}
