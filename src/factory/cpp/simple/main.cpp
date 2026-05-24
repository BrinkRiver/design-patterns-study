#include <iostream>
#include <vector>
#include <memory>

#include "Product.h"

int main() {
    std::vector<std::string> lstProduct = {"Truck", "Ship"};
    std::vector<std::unique_ptr<ITransport>> lstTransport;

    for (const auto& product : lstProduct) {
        if (product == "Truck") {
            lstTransport.push_back(std::make_unique<Truck>());
        } else if (product == "Ship") {
            lstTransport.push_back(std::make_unique<Ship>());
        }
        std::cout << "Creating product: " << product << std::endl;
    }
    return 0;
}
