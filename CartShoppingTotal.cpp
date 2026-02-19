/** An online store needs to calculate the total cost of items in a customer's shopping cart. The store
offers discounts on certain items and charges a flat shipping fee.
Requirements:
 Input the name, quantity, and price of each item.
 Apply discounts if applicable (e.g., 10% discount on items with price > Rs. 500).
 Add a flat shipping fee of Rs. 50.
 Calculate the total cost of the cart. */

#include <iostream>
using namespace std;
// This class represents an item in the shopping cart
class Item {
public:
    string name;
    int quantity;
    double price;

    double calculateTotal() {
        double total = price * quantity;

        if(price > 500) {
            double discount = total * 0.10;
            total -= discount;
            cout << "Discount applied on " << name 
                 << ": Rs " << discount << endl;
        }

        return total;
    }
};

int main() {

    // This variable declared to store how many items did the customer bought 
    int numOfItems;
    double grandTotal = 0;

    cout << "Enter number of items: ";
    cin >> numOfItems;

    Item item;

    // Taking Input for each item the customer bought 
    for(int i = 0; i < numOfItems; i++) {
        cout << "\nEnter item name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        grandTotal += item.calculateTotal();
    }

    grandTotal += 50; // Shipping fee

    cout << "\nShipping Fee: Rs 50";
    cout << "\nTotal Cart Value: Rs " << grandTotal << endl;

    return 0;
}
// We used A class representation of an item in the shopping cart
// Used encapsulation to bundle the data (name, quantity, price) and the method (calculateTotal) that operates on the data into a single unit (class Item).
/* Basic Abstraction is used to hide the complexity of the discount calculation and total cost calculation from the user. The user only interacts with the main function to input item details and receives the final total cost without needing to understand the underlying calculations.
*/