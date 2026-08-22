#include <iostream>
using namespace std;

/*struct Position {
    float x;
  float y;
    float z;
};*/

class Projector {
private:
    float positionX;
    float positionY;
    float positionZ;
public:
    Projector() {
        positionX = 0;
        positionY = 0;
        positionZ = 0;
    }
    Projector(float X, float Y, float Z) {
        positionX = X;
        positionY = Y;
        positionZ = Z;
    }
    void setPosition (float X, float Y, float Z) {
        positionX = X;
        positionY = Y;
        positionZ = Z;
    }
    float getPositionX () {

        return positionX;
    }
    float getPositionY () {
        return positionY;
    }
    float getPositionZ () {
        return positionZ;
    }
};

int main ()
{
    Projector projektor(2, 3, 5);
    cout << projektor.getPositionX() << " ";
    cout << projektor.getPositionY() << " ";
    cout << projektor.getPositionZ() << " ";
    return 0;
}