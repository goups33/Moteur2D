#include "SceneGame.hpp"



SceneGame::SceneGame()
{
	skybox = new sf::Texture("skybox.png");
	SKYBOX = new sf::Sprite(*skybox);
	SKYBOX->setPosition({ -100,0 });
	SKYBOX->setScale({ 4,4 });

	house = new sf::Texture("house.png");
	HOUSE = new sf::Sprite(*house);
	HOUSE->setPosition({ -300,100 });

	ground = new sf::Texture("terrain.png");
	GROUND = new sf::Sprite(*ground);
	GROUND->setPosition({ -400,490 });

	tree = new sf::Texture("tree.png");
	TREE = new sf::Sprite(*tree);
	TREE->setPosition({ -20,180 });

	pont = new sf::Texture("pont.png");
	PONT = new sf::Sprite(*pont);
	PONT->setPosition({ 250,480 });
}

SceneGame::~SceneGame() {
	if (skybox) {
		delete skybox; skybox = nullptr;
	}
	if (SKYBOX) {
		delete SKYBOX; SKYBOX = nullptr;
	}
	if (house) {
		delete house; house = nullptr;
	}
	if (HOUSE) {
		delete HOUSE; HOUSE = nullptr;
	}
	if (tree) {
		delete tree; tree = nullptr;
	}
	if (TREE) {
		delete TREE; TREE = nullptr;
	}
	if (pont) {
		delete pont; pont = nullptr;
	}
	if (PONT) {
		delete PONT; PONT = nullptr;
	}
}

void SceneGame::render(sf::RenderWindow& window) {
	window.draw(*SKYBOX);
	window.draw(*GROUND);
	window.draw(*TREE);
	window.draw(*HOUSE);
	window.draw(*PONT);
	
}
