#include "objects/Player.hpp"

Player::Player(float q_x, float q_y, float p_x, float p_y)
    : m_q{q_x,q_y}, m_p{p_x,p_y}
    {
    }
double Player::getSpeed() const {
    return std::sqrt(m_p.x * m_p.x + m_p.y * m_p.y);
}
double Player::getRotation() const {
    return std::atan2(m_p.y, m_p.x);
}
double Player::getHeight(const World& world) const {
    return m_q.y - world.getHeight(m_q.x);
}
