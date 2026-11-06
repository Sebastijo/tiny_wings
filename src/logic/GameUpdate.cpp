#include "logic/Game.hpp"

void Game::update(float dt)
{
    m_player.redirect(dt);
    m_player.move(dt);
}
