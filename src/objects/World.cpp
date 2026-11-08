#include "objects/World.hpp"

double World::getHeight(float x) const
{
    return x * x;
}
sf::Vector2f World::getTangent(float x) const
{
    sf::Vector2f t{1, 2.f * x};
    return Utils::normalize(t);
}
sf::Vector2f World::gravity() const
{
    return m_gravity;
}
