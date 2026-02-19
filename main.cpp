#include <iostream>
#include "monster.h"
#include "thanos.h"
using namespace std;

int main() {
    Thanos T;
    int n;
    cout << "How many monsters? ";
    cin >> n;

    monster *m = new monster[n]; // Requirement: ensure hp != 0 initially

    /* The Story */
    ++T; ++T;
    T.snap_finger(m, n); // Nothing happens
    
    ++T; ++T;
    T.snap_finger(m, n); // Nothing happens
    
    ++T; ++T;
    T.snap_finger(m, n); // Snap! (6 stones collected)

    for (int i = 0; i < n; i++) {
        m[i].display(); // Only displays if hp > 0
    }

    delete [] m;
    return 0;
}