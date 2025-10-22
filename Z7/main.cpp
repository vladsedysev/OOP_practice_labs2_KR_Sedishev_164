#include <iostream>
using namespace std;

class GameCharacter {
private:
    int health;
    int mana;
    int level;

public:
    GameCharacter() {
        health = 100;
        mana = 50;
        level = 1;
    }

    // Методы изменения характеристик
    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
    }

    void heal(int amount) {
        health += amount;
        if (health > 100) health = 100;
    }

    void useMana(int amount) {
        mana -= amount;
        if (mana < 0) mana = 0;
    }

    void restoreMana(int amount) {
        mana += amount;
        if (mana > 100) mana = 100;
    }

    void levelUp() {
        level++;
        cout << "Level up to " << level << "!" << endl;
    }

    // Методы для просмотра текущих значений
    void showStats() {
        cout << "Healt: " << health
             << ", Mana: " << mana
             << ", level: " << level << endl;
    }
};

int main() {
    GameCharacter hero;

    cout << "first parameters:" << endl;
    hero.showStats();

    hero.takeDamage(40);
    hero.useMana(20);

    cout << "\nAfter fight:" << endl;
    hero.showStats();

    hero.heal(30);
    hero.restoreMana(40);
    hero.levelUp();
    cout << "\nAfter relax:" << endl;
    hero.levelUp();
    hero.showStats();

    return 0;
}
