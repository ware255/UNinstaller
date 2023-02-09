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
    std::cout << "ファイル名を入力してください。" << std::endl;
    std::cin >> filename;
    renamefile();
    {
        std::ifstream ifs(re);
        if (!ifs)
        {
            std::cout << "Error:" << std::endl;
            std::cout << "ファイルが開けませんでした。" << std::endl;
            std::cout << "ファイルが存在するか管理者で起動してすることをお勧めします。" << std::endl;
            return 1;
        }
    }
    {
        std::ofstream ofs(re, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!ofs)
        {
            std::cout << "Error:" << std::endl;
            std::cout << "削除できませんでした。" << std::endl;
            return 1;
        }
        ofs << 0x00;
    }

    deletefile();

    return 0;
}