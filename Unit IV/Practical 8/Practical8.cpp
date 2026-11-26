#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    double price;

public:
    Book(int id, const string& bookTitle, double bookPrice)
        : bookId(id), title(bookTitle), price(bookPrice) {}

    void displayDetails() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title:   " << title << endl;
        cout << "Price:   " << price << endl;
    }
};

int main() {
    // Object and pointer to object using the arrow (->) operator
    Book book1(204, "Data Structures in C++", 549.50);
    Book* ptrBook = &book1;

    cout << "--- Accessing via Object Pointer (->) ---" << endl;
    ptrBook->displayDetails();

    // Dynamically allocated Book object accessed via pointer
    Book* dynBook = new Book(312, "Operating System Concepts", 799.00);
    cout << "\n--- Dynamically Allocated Book (->) ---" << endl;
    dynBook->displayDetails();

    delete dynBook;
    return 0;
}