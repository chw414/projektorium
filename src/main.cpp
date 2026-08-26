#include <iostream>
#include "scene/projector.hpp"
#include "scene/scene.hpp"

int main ()
{
    Scene scene;
    Projector projector1(1.0f, 2.0f, 3.0f);
    Projector projector2(4.0f, 5.0f, 6.0f);
    scene.addProjector(projector1);
    scene.addProjector(projector2);
    const Projector& firstProjector = scene.getProjector(0);
    std::cout << firstProjector.getPosition().x << " ";
    std::cout << firstProjector.getPosition().y << " ";
    std::cout << firstProjector.getPosition().z << "\n";
    std::cout << scene.getProjectorCount() << "\n";
    return 0;
}