#include "logic/Game.hpp"

Game::Game(float q_x, float q_y, float p_x, float p_y)
    : m_player{q_x, q_y, p_x, p_y}
{
}

void Game::run()
{
    std::chrono::steady_clock::time_point previousTime{std::chrono::steady_clock::now()};
    while (isRunning)
    {

        processEvents();

        std::chrono::steady_clock::time_point currentTime{std::chrono::steady_clock::now()};
        float dt{std::chrono::duration<float>(
                     currentTime - previousTime)
                     .count()};

        update(dt);
        previousTime = currentTime;
        render();
    }
}
