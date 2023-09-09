// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1



#include "Character.hpp"

// Default constructor
Character::Character()
    : name_("NAMELESS"), race_(NONE), vitality_(0), maxArmor_(0), level_(0), isEnemy_(false) {}

// Parameterized constructor
Character::Character(const std::string& name, Race race, int vitality, int maxArmor, int level, bool isEnemy)
    : name_(name), race_(race), vitality_(vitality), maxArmor_(maxArmor), level_(level), isEnemy_(isEnemy) {}

// Accessor functions
std::string Character::getName() const {
    return name_;
}

Character::Race Character::getRace() const {
    return race_;
}

int Character::getVitality() const {
    return vitality_;
}

int Character::getArmor() const {
    return maxArmor_;
}

int Character::getLevel() const {
    return level_;
}

bool Character::isEnemy() const {
    return isEnemy_;
}

// Mutator functions
void Character::setName(const std::string& name) {
    // Ensure the name consists of only alphabetical characters
    std::string updatedName;
    for (char c : name) {
        if (isalpha(c)) {
            updatedName += toupper(c);
        }
    }

    // If no valid alphabetical characters found, set the name to "NAMELESS"
    if (updatedName.empty()) {
        name_ = "NAMELESS";
    } else {
        name_ = updatedName;
    }
}

void Character::setRace(Race race) {
    race_ = race;
}

void Character::setVitality(int vitality) {
    if (vitality >= 0) {
        vitality_ = vitality;
    }
}

void Character::setArmor(int maxArmor) {
    if (maxArmor >= 0) {
        maxArmor_ = maxArmor;
    }
}

void Character::setLevel(int level) {
    if (level >= 0) {
        level_ = level;
    }
}

void Character::setEnemy() {
    isEnemy_ = true;
}
