#pragma once
#include "../math/Vec3.hpp"

class Projector
{
private:
    Vec3 position;
public:
    Projector();
    Projector(float X, float Y, float Z);
    void setPosition (float X, float Y, float Z);
    void setPosition(const Vec3& newPosition);
    const Vec3& getPosition() const;
};
