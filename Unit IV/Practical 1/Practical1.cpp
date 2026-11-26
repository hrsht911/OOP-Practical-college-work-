#include <iostream>

// Function template to return the higher of two prices
template <typename T>
T getHigherPrice(T price1, T price2) {
    return (price1 > price2) ? price1 : price2;
}

int main() {
    // 1. Comparing integer prices (e.g., rounded currency units)
    int itemA_int = 499;
    int itemB_int = 799;
    int higherIntPrice = getHigherPrice(itemA_int, itemB_int);
    std::cout << "Integer comparison (" << itemA_int << " vs " << itemB_int
              << ") -> Higher price: " << higherIntPrice << "\n";

    // 2. Comparing floating-point prices (e.g., exact decimal prices)
    double itemA_double = 1499.50;
    double itemB_double = 1499.99;
    double higherDoublePrice = getHigherPrice(itemA_double, itemB_double);
    std::cout << "Floating-point comparison (" << itemA_double << " vs " << itemB_double
              << ") -> Higher price: " << higherDoublePrice << "\n";

    // 3. Using float explicitly
    float itemA_float = 29.99f;
    float itemB_float = 19.95f;
    float higherFloatPrice = getHigherPrice<float>(itemA_float, itemB_float);
    std::cout << "Float comparison (" << itemA_float << " vs " << itemB_float
              << ") -> Higher price: " << higherFloatPrice << "\n";

    return 0;
}