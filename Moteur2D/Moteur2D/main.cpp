#include <iostream>

#include "SFML/Graphics.hpp"
#include "Scene/SceneGame.hpp"

int main(int argc, char* argv[])
{
    SceneGame game;
	sf::ContextSettings settings;
	settings.antiAliasingLevel = 8;

	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "PlaceHolder", sf::Style::Default, sf::State::Windowed, settings);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }

        window.clear(sf::Color::White);
        game.render(window);
        window.display();
    }

    game.~SceneGame();

	return 0;
}