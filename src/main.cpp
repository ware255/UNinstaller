#include "un.hpp"

int main() {
    un t;
    if (t.nullout()) {
        std::cin.get();
        return 1;
    }
    else {
        std::cout << "íœ‚É¬Œ÷" << std::endl;
        std::cin.get();
    }
    return 0;
}