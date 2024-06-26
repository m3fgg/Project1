#include <iostream>
#include <string>


enum PlayerWeapon
{
	Gun,
    MagWand,
    Bow,
    Sword,
    Pickaxe
};

enum class PlayerRace
{
    Magician,
    Knight,
    Elf,
    Dwarf
};

struct PlayerStats
{
    PlayerRace playerRace;
    std::string playerRaceString;
    PlayerWeapon playerWeapon;
    std::string playerWeaponString;

    std::string playerName;

    int age;

    float damage;

    float health;


};


void creatingCharacter(PlayerStats& playerStats)
{
    int tempNumber;
    std::string tempString;

    std::cout << "===============================================================================" << std::endl;
    std::cout << "                                Creating Character                             " << std::endl;
    std::cout << "===============================================================================" << std::endl;
    std::cout << "          Choose race (0 - Magician, 1 - Knight, 2 - Elf, 3 - Dwarf): ";
    std::cin >> tempNumber;
    std::cout << std::endl;
    
    switch(tempNumber)
    {
    case (0):
    	playerStats.playerRace = PlayerRace::Magician;
        playerStats.playerRaceString = "Magician";
        break;
    case (1):
    	playerStats.playerRace = PlayerRace::Knight;
        playerStats.playerRaceString = "Knight";
        break;
    case (2):
    	playerStats.playerRace = PlayerRace::Elf;
        playerStats.playerRaceString = "Elf";
        break;
    case (3):
    	playerStats.playerRace = PlayerRace::Dwarf;
        playerStats.playerRaceString = "Dwarf";
        break;
    default:
        std::cout << "this race doesn't exist";
        break;
    }
    std::cout << "===============================================================================" << std::endl;
    std::cout << "   Choose weapon (0 - Gun, 1 - MagWand, 2 - Bow, 3 - Sword, 4 - Pickaxe): ";
    std::cin >> tempNumber;
    std::cout << std::endl;

    switch(tempNumber)
    {
    case (0):
        playerStats.playerWeapon = PlayerWeapon::Bow;
        playerStats.playerWeaponString = "Bow";
        break;
    case (1):
        playerStats.playerWeapon = PlayerWeapon::Sword;
        playerStats.playerWeaponString = "Sword";
        break;
    case (2):
        playerStats.playerWeapon = PlayerWeapon::MagWand;
        playerStats.playerWeaponString = "MagWand";
        break;
    case (3):
        playerStats.playerWeapon = PlayerWeapon::Pickaxe;
        playerStats.playerWeaponString = "Pickaxe";
        break;
    case (4):
        playerStats.playerWeapon = PlayerWeapon::Gun;
        playerStats.playerWeaponString = "Gun";
        break;
    default:
        std::cout << "This weapon doesn't exist";
        break;
    }

    std::cout << "===============================================================================" << std::endl;
    std::cout << "                                Enter age: ";
    std::cin >> tempNumber;
    std::cout << std::endl;

    playerStats.age = tempNumber;

    std::cout << "===============================================================================" << std::endl;
    std::cout << "                                Enter damage: ";
    std::cin >> tempNumber;
    std::cout << std::endl;

    playerStats.damage = tempNumber;

    std::cout << "===============================================================================" << std::endl;
    std::cout << "                                Enter health: ";
    std::cin >> tempNumber;
    std::cout << std::endl;

    playerStats.health = tempNumber;

    std::cout << "===============================================================================" << std::endl;
    std::cout << "                                Enter character name: ";
    std::cin >> tempString;
    std::cout << std::endl;

    playerStats.playerName = tempString;
}

void showCharacterStats(PlayerStats& playerStats)
{
    std::cout << "===============================================================================" << std::endl;
    std::cout << "                             Character name: " << playerStats.playerName << std::endl;
    std::cout << "                             Character race: " << playerStats.playerRaceString << std::endl;
    std::cout << "                             Character weapon: " << playerStats.playerWeaponString << std::endl;
    std::cout << "                             Character age: " << playerStats.age << std::endl;
    std::cout << "                             Character health: " << playerStats.health << std::endl;
    std::cout << "                             Character damage: " << playerStats.damage << std::endl;
}

void updateCharacterStats(PlayerStats& playerStats)
{
    int tempNumber;

	std::cout << "=============================================================================== " << std::endl;
    std::cout << "           " << playerStats.playerName << ", choose quality to upgrade (0 - health, 1 - damage): ";
    std::cin >> tempNumber;
    std::cout << std::endl;

    switch(tempNumber)
    {
    case (0):
        std::cout << "=============================================================================== " << std::endl;
        std::cout << "                             Number to upgrade: ";
        std::cin >> tempNumber;
        playerStats.health += tempNumber;
        break;
    case (1):
        std::cout << "=============================================================================== " << std::endl;
        std::cout << "                             Number to upgrade: ";
        std::cin >> tempNumber;
        playerStats.damage += tempNumber;
        break;
    default:
        std::cout << "=============================================================================== " << std::endl;
        std::cout << "                             Nothing was upgraded ";
        std::cout << std::endl;
        break;
    }
    showCharacterStats(playerStats);
}

void changeCharacterName(PlayerStats& playerStats)
{
    std::string newName;
    std::cout << "=============================================================================== " << std::endl;
    std::cout << "            " << playerStats.playerName << ", enter new name: ";
    std::cin >> newName;
    std::cout << std::endl;

    playerStats.playerName = newName;
}

void printHello() {
    std::cout << "hello, World";
}

int main()
{
    PlayerStats player1;
    
    creatingCharacter(player1);
    updateCharacterStats(player1);
}
