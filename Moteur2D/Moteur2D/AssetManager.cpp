#include <iostream>

#include "AssetManager.hpp"

AssetManager::AssetManager() {
	LoadTexture("ERROR", "Assets/Texture/error.png");
	LoadFont("ERROR", "Assets/Font/error.ttf");
}

void AssetManager::LoadTexture(const std::string& Index, const std::string& FilePath) {
	auto tex = std::make_unique<sf::Texture>();
	if (tex->loadFromFile(FilePath)) {
		Texture[Index] = std::move(tex);
	}
}

const sf::Texture& AssetManager::GetTexture(const std::string& Index) {
	auto found = Texture.find(Index);
	if (found != Texture.end()) {
		return *found->second;
	}
	else {

		std::cerr << "Texture manquante : " << Index << " ! Utilisation du fallback." << std::endl;

		return *Texture.at("ERROR");
	}
}

void AssetManager::LoadFont(const std::string& Index, const std::string& FilePath) {
	auto tex = std::make_unique<sf::Font>();
	if (tex->openFromFile(FilePath)) {
		Font[Index] = std::move(tex);
	}
}

const sf::Font& AssetManager::GetFont(const std::string& Index) {
	auto found = Font.find(Index);
	if (found != Font.end()) {
		return *found->second;
	}
	else {

		std::cerr << "Font manquante : " << Index << " ! Utilisation du fallback." << std::endl;

		return *Font.at("ERROR");
	}
}

void AssetManager::LoadSound(const std::string& Index, const std::string& FilePath) {
	auto tex = std::make_unique<sf::SoundBuffer>();
	if (tex->loadFromFile(FilePath)) {
		Sound[Index] = std::move(tex);
	}
}

const sf::SoundBuffer& AssetManager::GetSound(const std::string& Index) {
	auto found = Sound.find(Index);
	if (found != Sound.end()) {
		return *found->second;
	}
	else {

		std::cerr << "Sound manquante : " << Index << " ! Utilisation du fallback." << std::endl;

		return *Sound.at("ERROR");
	}
}