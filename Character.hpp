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
    Character()=default; // Default constructor
    Character(std::string name, std::string race, int vitality = 0, int armor = 0, int level = 0, bool isEnemy = false);

    // Accessor functions
    std::string getName() const;
    std::string getRace() const;
    int getVitality() const;
    int getArmor() const;
    int getLevel() const;
    bool isEnemy() const;

    // Mutator functions
    void setName(const std::string& name);
    void setRace(const std::string& race);
    void setVitality(const int& vitality);
    void setArmor(const int& armor);
    void setLevel(const int& level);
    void setEnemy();

private:
    std::string name_;
    std::string race_;
    int vitality_;
    int maxArmor_;
    int level_;
    bool isEnemy_;
};

#endif // CHARACTER_HPP
