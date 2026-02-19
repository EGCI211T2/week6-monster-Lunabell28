#ifndef thanos_h
#define thanos_h
#include "monster.h"

class Thanos {
private:
    int stones;
    int hp; 
public:
    // Constructor
    Thanos(int s = 0, int h = 1000) : stones(s), hp(h) {}
    
    // Destructor
    ~Thanos() {}

    // Requirement: Clear hp for half (n/2) of monsters if stone = 6
    void snap_finger(monster m[], int n) {
        if (stones >= 6) {
            for (int i = 0; i < n / 2; i++) {
                m[i].hp = 0; // Thanos can do this because he is a 'friend'
            }
        }
    }

    // Requirement: Increase the stone count
    void operator++() {
        stones++;
    }
};
#endif