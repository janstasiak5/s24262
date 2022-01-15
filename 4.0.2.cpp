#include <iostream>
//auto perm = PERM_READ | PERM_WRITE ;

enum sports {
bieganie       = 1,
jezdziectwo    = 2,
kolarstwo      = 3,
plywanie       = 4,
rzut_oszczepem = 5,
skok_w_dal     = 6,
wspinaczka     = 7,
zapasy         = 8,
};

int main() {
    auto triathlon = bieganie|plywanie|kolarstwo;
}
