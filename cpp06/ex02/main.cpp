#include "Base.hpp"

int main() {
    std::srand(std::time(0));

    Base* obj = generate();
    
    std::cout << "Ponteiro: ";
    identify(obj);
    
    std::cout << "Referencia: ";
    identify(*obj);

    delete obj;
    return 0;
}