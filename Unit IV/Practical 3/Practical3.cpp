#include <iostream>
using namespace std;

// Class template to store, display, and sum two account balances of type T
template <typename T>
class AccountBalances {
private:
    T balance1;
    T balance2;

public:
    AccountBalances(T b1, T b2) : balance1(b1), balance2(b2) {}

    void displayBalances() const {
        cout << "Account 1 Balance: " << balance1 << endl;
        cout << "Account 2 Balance: " << balance2 << endl;
    }

    T getTotalBalance() const {
        return balance1 + balance2;
    }
};

int main() {
    // 1. Integer balances (e.g., whole currency units)
    cout << "--- Integer Account Balances ---" << endl;
    AccountBalances<int> intAccounts(15000, 25000);
    intAccounts.displayBalances();
    cout << "Total Balance: " << intAccounts.getTotalBalance() << endl << endl;

    // 2. Floating-point balances (e.g., decimal currency amounts)
    cout << "--- Floating-Point Account Balances ---" << endl;
    AccountBalances<double> doubleAccounts(12450.75, 8320.50);
    doubleAccounts.displayBalances();
    cout << "Total Balance: " << doubleAccounts.getTotalBalance() << endl;

    return 0;
}