#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Product
{
    int id;
    string name;
    float price;
    int quantity;
    Product* next;
    Product* hashNext;
};

Product* head = NULL;

const int SIZE = 10;
Product* hashTable[SIZE] = {NULL};

int hashFunction(int id)
{
    return id % SIZE;
}

// Add Product
void addProduct()
{
    Product* p = new Product;

    cout << "Enter Product ID: ";
    cin >> p->id;

    int index = hashFunction(p->id);

    Product* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->id == p->id)
        {
            cout << "Product ID already exists!\n";
            delete p;
            return;
        }

        temp = temp->hashNext;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Product Name: ";
    getline(cin, p->name);

    cout << "Enter Product Price: ";
    cin >> p->price;

    cout << "Enter Product Quantity: ";
    cin >> p->quantity;

    // Insert into Linked List
    p->next = head;
    head = p;

    // Insert into Hash Table
    p->hashNext = hashTable[index];
    hashTable[index] = p;

    cout << "Product added successfully!\n";
}

// Update Product
void updateProduct()
{
    int id;

    cout << "Enter Product ID to update: ";
    cin >> id;

    int index = hashFunction(id);

    Product* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter New Product Name: ";
            getline(cin, temp->name);

            cout << "Enter New Product Price: ";
            cin >> temp->price;

            cout << "Enter New Product Quantity: ";
            cin >> temp->quantity;

            cout << "Product updated successfully!\n";
            return;
        }

        temp = temp->hashNext;
    }

    cout << "Product not found!\n";
}

// Search Product
void searchProduct()
{
    int id;

    cout << "Enter Product ID to search: ";
    cin >> id;

    int index = hashFunction(id);

    Product* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "\nProduct Found!\n";
            cout << "Product ID: " << temp->id << endl;
            cout << "Product Name: " << temp->name << endl;
            cout << "Product Price: Rs. " << temp->price << endl;
            cout << "Product Quantity: " << temp->quantity << endl;
            return;
        }

        temp = temp->hashNext;
    }

    cout << "Product not found!\n";
}

// Display All Products
void displayProducts()
{
    Product* temp = head;

    if (temp == NULL)
    {
        cout << "No product records available!\n";
        return;
    }

    cout << "\n---- All Product Records ----\n";

    while (temp != NULL)
    {
        cout << "\nProduct ID: " << temp->id << endl;
        cout << "Product Name: " << temp->name << endl;
        cout << "Product Price: Rs. " << temp->price << endl;
        cout << "Product Quantity: " << temp->quantity << endl;

        temp = temp->next;
    }
}

// Remove Discontinued Product
void removeProduct()
{
    int id;

    cout << "Enter Product ID to remove: ";
    cin >> id;

    int index = hashFunction(id);

    // Search in Hash Table
    Product* temp = hashTable[index];
    Product* prevHash = NULL;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            // Remove from Hash Table
            if (prevHash == NULL)
            {
                hashTable[index] = temp->hashNext;
            }
            else
            {
                prevHash->hashNext = temp->hashNext;
            }

            break;
        }

        prevHash = temp;
        temp = temp->hashNext;
    }

    if (temp == NULL)
    {
        cout << "Product not found!\n";
        return;
    }

    // Remove from Linked List
    Product* current = head;
    Product* prev = NULL;

    while (current != NULL)
    {
        if (current->id == id)
        {
            if (prev == NULL)
            {
                head = current->next;
            }
            else
            {
                prev->next = current->next;
            }

            delete current;

            cout << "Discontinued product removed successfully!\n";
            return;
        }

        prev = current;
        current = current->next;
    }
}

// Main Function
int main()
{
    int choice;

    do
    {
        cout << "\n--- Laptop Product Management System ---\n";
        cout << "1. Add Product\n";
        cout << "2. Update Product\n";
        cout << "3. Search Product\n";
        cout << "4. Display All Products\n";
        cout << "5. Remove Discontinued Product\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                updateProduct();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                displayProducts();
                break;

            case 5:
                removeProduct();
                break;

            case 6:
                cout << "Exiting program.....\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
