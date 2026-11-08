#include "logic/Game.hpp"

void Game::render(sf::RenderWindow &window) const
{
    window.clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);

    // end the current frame
    window.display();
}
