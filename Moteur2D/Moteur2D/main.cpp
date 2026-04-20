#include <iostream>

#include "SFML/Graphics.hpp"
#include "AssetManager.hpp"

int main(int argc, char* argv[])
{
    AssetManager A_set;
	sf::ContextSettings settings;
	settings.antiAliasingLevel = 8;

	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "PlaceHolder", sf::Style::Default, sf::State::Windowed, settings);
    sf::RectangleShape rectangle;
    rectangle.setPosition({ 100,100 });
    rectangle.setTexture(&A_set.GetTexture("ERROR"));
    rectangle.setSize({ 64,64 });

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
        window.draw(rectangle);
        window.display();
    }

	return 0;
}