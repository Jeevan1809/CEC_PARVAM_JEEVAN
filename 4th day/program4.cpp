<<<<<<< HEAD
   #include <iostream>

using namespace std;

class Item {

private:

    int quantity;

    float pricePerItem;

    float totalPrice;

    float discount;

public:

    Item(int q, float p) {

        quantity = q;

        pricePerItem = p;

        totalPrice = 0;

        discount = 0;

    }
    void calculateTotal() {

        totalPrice = quantity * pricePerItem;

        if (totalPrice > 2000) {

            discount = 0.2 * totalPrice;

        } else {

            discount = 0;

        }

    }

    void display() {

        float finalPrice = totalPrice - discount;

        cout << "Quantity: " << quantity << endl;

        cout << "Price per item: Rs. " << pricePerItem << endl;

        cout << "Total price before discount: Rs. " << totalPrice << endl;

        if (discount > 0) {

            cout << "Discount applied: Rs. " << discount << endl;

        } else {

            cout << "No discount applied." << endl;

        }

        cout << "Final price to pay: Rs. " << finalPrice << endl;

    }

};

int main() {

    int qty;

    float price;

    cout << "Enter quantity: ";

    cin >> qty;

    cout << "Enter price per item (in Rs): ";

    cin >> price;

    Item item(qty, price);

    item.calculateTotal();

    item.display();

    return 0;

}
=======
    #include<iostream>
using namespace std;
 
class Product
{
    private:
     int quantity;
     float priceperItem;
     float discountperitem;

     public:
     void setproduct(int q, float price, float discount)
     {
        if (q > 0 && price > 0)
        {
            quantity =q;
            priceperItem = price;
            discountperitem = discount;
        }
        else
        {
            cout<<"Invalid quantity or price!" << endl;
        }
     }

     float getTotalprice()
     {
        return quantity * priceperItem;
    }

    int getQuantity()
    {
        return quantity;
    }

    float getUnitPrice()
    {
        return priceperItem;
    }

    float getDiscount()
    {
        return discountperitem;
    }
};

int main()
{
   Product item1;
   item1.setproduct(3,499.99,50);
   cout<<""
 return 0;
}

>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
