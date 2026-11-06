#include "objects/World.hpp"

double World::getHeight(double x) const
{
    return x * x;
}
sf::Vector2f World::getTangent(double x) const
{
    sf::Vector2f t{1, 2 * x};
    return Utils::normalize(t);
}
sf::Vector2f World::gravity() const
{
    return m_gravity;
}
