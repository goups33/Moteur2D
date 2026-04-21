#include "SFML/Graphics.hpp"

class SceneGame
{
private:

	sf::Texture* tree;
	sf::Sprite* TREE;
	sf::Texture* ground;
	sf::Sprite* GROUND;
	sf::Texture* skybox;
	sf::Sprite* SKYBOX;
	sf::Texture* house;
	sf::Sprite* HOUSE;
	sf::Texture* pont;
	sf::Sprite* PONT;

public:
	SceneGame();
	~SceneGame();
	void update();
	void render(sf::RenderWindow& window);

};