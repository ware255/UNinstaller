#include "un.hpp"

int main() {
    un t;
    if (t.nullout()) {
        std::cin.get();
        return 1;
    }
    else {
        std::cout << "削除に成功" << std::endl;
        std::cin.get();
    }
    return 0;
}
