#include "un.hpp"

int main() {
    un t;
    if (t.nullout()) {
        std::cin.get();
        return 1;
    }
    else {
        std::cout << "�폜�ɐ���" << std::endl;
        std::cin.get();
    }
    return 0;
}