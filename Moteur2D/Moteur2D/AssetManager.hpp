#pragma once

#include <unordered_map>
#include <string>
#include <memory>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class AssetManager
{
private:
	std::unordered_map<std::string, std::unique_ptr<sf::Texture>> Texture;
	std::unordered_map<std::string, std::unique_ptr<sf::Font>> Font;
	std::unordered_map<std::string, std::unique_ptr<sf::SoundBuffer>> Sound;
	
public:
	AssetManager();

	void LoadTexture(const std::string& Index, const std::string& FilePath);
	const sf::Texture& GetTexture(const std::string& Index);

	void LoadFont(const std::string& Index, const std::string& FilePath);
	const sf::Font& GetFont(const std::string& Index);

	void LoadSound(const std::string& Index, const std::string& FilePath);
	const sf::SoundBuffer& GetSound(const std::string& Index);
};