#pragma once
#include <SFML/Graphics.hpp>

#include <cmath>

namespace Utils
{
    float dot(const sf::Vector2f &v, const sf::Vector2f &u);
    float norm(const sf::Vector2f &v);
    sf::Vector2f normalize(const sf::Vector2f &v);
}
