#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Bob", 100);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}