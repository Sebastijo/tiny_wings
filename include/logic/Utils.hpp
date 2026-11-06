#pragma once
#include <SFML/Graphics.hpp>

#include <cmath>

namespace Utils
{
    float dot(const sf::Vector2f &v, const sf::Vector2f &u)
    {
        return v.x * u.x + u.y * u.y;
    }
    float norm(const sf::Vector2f &v)
    {
        return std::sqrt(dot(v, v));
    }
    sf::Vector2f normalize(const sf::Vector2f &v)
    {
        return v / norm(v);
    }
}
