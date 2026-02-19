#ifndef monster_h
#define monster_h

#include <iostream>
#include <string>
using namespace std;

class monster {
private:
    string name;
    int hp, potion;

public:
    friend class Thanos; // Allows Thanos to set hp to 0

    monster(string n="Anonymous", int h=10, int p=2) {
        name = n;
        hp = h; // Requirement: ensure hp is not 0 at beginning
        potion = p;
    }

    void display() {
        if (hp > 0) { // Requirement: If hp=0, do not display
            cout << "Monster: " << name << " [HP: " << hp << "]" << endl;
        }
    }
    
    ~monster() {
        if (hp > 0) cout << name << " is gone." << endl;
    }
};
#endif