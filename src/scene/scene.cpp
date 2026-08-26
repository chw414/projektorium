#include "scene.hpp"

void Scene::addProjector(const Projector& projector)
{
    projectors.push_back(projector);
};

std::size_t Scene::getProjectorCount() const
{
    return projectors.size();
};

const Projector& Scene::getProjector(std::size_t index)
{
    return projectors.at(index);
};