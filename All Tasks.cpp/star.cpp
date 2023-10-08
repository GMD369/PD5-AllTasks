#include <iostream>
#include <string>

using namespace std;

// Constants
const int MAX_PRODUCTS = 100;
const int MAX_CUSTOMERS = 100;
const int MAX_ORDERS = 100;

// Define structures for entities
struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

struct Customer {
    int id;
    string name;
};

struct Order {
    int id;
    int customerId;
    int productId;
    int quantity;
};

// Function prototypes
int addProduct(Product products[], int& productCount, int productIdCounter);
int addCustomer(Customer customers[], int& customerCount, int customerIdCounter);
int createOrder(Order orders[], int& orderCount, int orderIdCounter);
void displayInventory(const Product products[], int productCount, const Customer customers[], int customerCount);

int main() {
    Product products[MAX_PRODUCTS];
    Customer customers[MAX_CUSTOMERS];
    Order orders[MAX_ORDERS];
    
    int productIdCounter = 1;
    int customerIdCounter = 1;
    int orderIdCounter = 1;

    int productCount = 0;
    int customerCount = 0;
    int orderCount = 0;

    while (true) {
        cout << "===== Inventory Management System =====" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Add Customer" << endl;
        cout << "3. Create Order" << endl;
        cout << "4. Display Inventory" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                productCount = addProduct(products, productCount, productIdCounter);
                break;

            case 2:
                customerCount = addCustomer(customers, customerCount, customerIdCounter);
                break;

            case 3:
                orderCount = createOrder(orders, orderCount, orderIdCounter);
                break;

            case 4:
                displayInventory(products, productCount, customers, customerCount);
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

// Function to add a product
int addProduct(Product products[], int& productCount, int productIdCounter) {
    if (productCount < MAX_PRODUCTS) {
        Product product;
        product.id = productIdCounter;
        cout << "Enter product name: ";
        cin >> product.name;
        cout << "Enter product price: ";
        cin >> product.price;
        cout << "Enter product quantity: ";
        cin >> product.quantity;
        products[productCount++] = product;
        return productCount;
    } else {
        cout << "Maximum product limit reached." << endl;
        return productCount;
    }
}

// Function to add a customer
int addCustomer(Customer customers[], int& customerCount, int customerIdCounter) {
    if (customerCount < MAX_CUSTOMERS) {
        Customer customer;
        customer.id = customerIdCounter;
        cout << "Enter customer name: ";
        cin >> customer.name;
        customers[customerCount++] = customer;
        return customerCount;
    } else {
        cout << "Maximum customer limit reached." << endl;
        return customerCount;
    }
}