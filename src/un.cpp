#include "un.hpp"

un::un() {
    std::cout << "\n _______  _______  __                __           __  __" << std::endl;
    std::cout << "|   |   ||    |  ||__|.-----..-----.|  |_ .---.-.|  ||  |.-----..----." << std::endl;
    std::cout << "|   |   ||       ||  ||     ||__ --||   _||  _  ||  ||  ||  -__||   _|" << std::endl;
    std::cout << "|_______||__|____||__||__|__||_____||____||___._||__||__||_____||__|\n" << std::endl;
    re = "deleted";
}

void un::renamefile() {
    std::filesystem::rename(filename, re);
}

void un::deletefile() {
    std::filesystem::remove(re);
}

int un::nullout() {
    std::cout << "�t�@�C��������͂��Ă��������B" << std::endl;
    std::cin >> filename;
    renamefile();
    {
        std::ifstream ifs(re);
        if (!ifs)
        {
            std::cout << "Error:" << std::endl;
            std::cout << "�t�@�C�����J���܂���ł����B" << std::endl;
            std::cout << "�t�@�C�������݂��邩�Ǘ��҂ŋN�����Ă��邱�Ƃ������߂��܂��B" << std::endl;
            return 1;
        }
    }
    {
        std::ofstream ofs(re, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!ofs)
        {
            std::cout << "Error:" << std::endl;
            std::cout << "�폜�ł��܂���ł����B" << std::endl;
            return 1;
        }
        ofs << 0x00;
    }

    deletefile();

    return 0;
}