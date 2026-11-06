#include "objects/Player.hpp"

Player::Player(float q_x, float q_y, float p_x, float p_y)
    : m_q{q_x, q_y}, m_p{p_x, p_y}
{
}
float Player::getSpeed() const
{
    return Utils::norm(m_p);
}
float Player::getRotation() const
{
    return std::atan2(m_p.y, m_p.x);
}
float Player::getHeight() const
{
    return m_q.y - m_world.getHeight(m_q.x);
}
sf::Vector2f Player::q() const
{
    return m_q;
}
sf::Vector2f Player::p() const
{
    return m_p;
}
void Player::updateTouchedFloorLastIter()
{
    touchedFloorLastIter = (getHeight() < Config::epsilon);
}

void Player::redirect(float dt)
{
    sf::Vector2f acceleration;
    sf::Vector2f tangent{m_world.getTangent(m_q.x)};

    if (getHeight() >= Config::epsilon)
    {
        acceleration = m_world.gravity();
    }
    else
    {
        float tangentAccelerationNorm{
            Utils::dot(m_world.gravity(), tangent)};
        acceleration = tangentAccelerationNorm * tangent;

        if (not touchedFloorLastIter)
        {
            sf::Vector2f p_parallel{Utils::dot(m_p, tangent) * tangent};
            sf::Vector2f p_perp{m_p - p_parallel};
            m_p = p_parallel - Config::ELLASTICITY * p_perp;
        }
        else
        {
            m_p = getSpeed() * tangent;
        }
    };
    m_p += dt * acceleration;
}

void Player::move(float dt)
{
    updateTouchedFloorLastIter();
    m_q += dt * m_p;
    if (getHeight() < 0)
        m_q.y -= getHeight();
}
