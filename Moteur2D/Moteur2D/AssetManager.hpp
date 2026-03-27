#pragma once

#include <unordered_map>
#include <string>
#include <memory>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class AssetManager
{
private:
	std::unordered_map<std::string, sf::Texture*> Texture;
	std::unordered_map<std::string, sf::Font*> Font;
	std::unordered_map<std::string, sf::SoundBuffer*> Sound;
	
public:
	AssetManager();
	~AssetManager();

	void LoadTexture(const std::string& Index, const std::string& FilePath);
	const sf::Texture& GetTexture(const std::string& Index);

	void LoadFont(const std::string& Index, const std::string& FilePath);
	const sf::Font& GetFont(const std::string& Index);

	void LoadSound(const std::string& Index, const std::string& FilePath);
	const sf::SoundBuffer& GetSound(const std::string& Index);
};