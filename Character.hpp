// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1



#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {
public:
    // Enum to represent the character's race
    enum Race { NONE, HUMAN, ELF, DWARF, LIZARD, UNDEAD };

    // Constructors
    Character(); // Default constructor
    Character(const std::string& name, Race race, int vitality = 0, int armor = 0, int level = 0, bool isEnemy = false);

    // Accessor functions
    std::string getName() const;
    Race getRace() const;
    int getVitality() const;
    int getArmor() const;
    int getLevel() const;
    bool isEnemy() const;

    // Mutator functions
    void setName(const std::string& name);
    void setRace(Race race);
    void setVitality(int vitality);
    void setArmor(int armor);
    void setLevel(int level);
    void setEnemy();

private:
    std::string name_;
    Race race_;
    int vitality_;
    int armor_;
    int level_;
    bool isEnemy_;
};

#endif // CHARACTER_HPP
