#include "Serialization.hpp"

int main() {
    Data original;
    original.value = 42;
    original.label = "A resposta para tudo";
    uintptr_t raw = Serialization::serialize(&original);

    std::cout << "Endereço original: " << &original << std::endl;
    std::cout << "Inteiro gerado:    " << raw << std::endl;

    Data* result = Serialization::deserialize(raw);
    std::cout << "Endereço final:    " << result << std::endl;

    if (result == &original && result->value == 42) {
        std::cout << "✅ Sucesso! Os dados estão intactos." << std::endl;
    } else {
        std::cout << "❌ Erro na conversão!" << std::endl;
    }

    return 0;
}