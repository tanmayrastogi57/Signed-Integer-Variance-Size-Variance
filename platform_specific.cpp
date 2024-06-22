#include <iostream>

int main() {
#ifdef _WIN32
    std::cout << "Running on Windows" << std::endl;
#elif __APPLE__
    std::cout << "Running on macOS" << std::endl;
#elif __linux__
    std::cout << "Running on Linux" << std::endl;
#else
    std::cout << "Unknown platform" << std::endl;
#endif

    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    return 0;
}
