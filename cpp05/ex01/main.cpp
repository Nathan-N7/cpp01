#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Bob", 2);
        b.incrementGrade();
        std::cout << "valor: " << b.getGrade() << std::endl;
        b.incrementGrade();
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}