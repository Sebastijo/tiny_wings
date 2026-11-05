#include "objects/Player.hpp"

double Player::getSpeed() const {
    return std::sqrt(m_velocity.x * m_velocity.x + m_velocity.y * m_velocity.y);
}
double Player::getRotation() const {
    return std::atan2(m_velocity.y, m_velocity.x);
}
double Player::getHeight(const World& world) const {
    return m_position.y - world.getHeight(m_position.x);
}
