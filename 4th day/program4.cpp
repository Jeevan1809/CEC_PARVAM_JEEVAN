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

