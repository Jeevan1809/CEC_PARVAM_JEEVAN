 #include <iostream>
using namespace std; 

class Invoice {
    public:
        void generateInvoice(int productID)
        {
            cout << "Generating Invoice for product ID: " << productID << endl;
            cout << "Default quantity: 1 | No discount applied! " << endl;
        }
         void generateInvoice(int productID, int quantity)
        {
            cout << "Generating Invoice for product ID: " << productID << endl;
            cout << "Quantity:" << quantity << " | No discount applied! " << endl;
        }
         void generateInvoice(int productID, int quantity, float discount)
        {
            cout << "Generating Invoice for product ID: " << productID << endl;
            cout << "Quantity:" << quantity << " | Discount:  " << discount << "%" << endl;
        }
        
};

int main(){
    Invoice inv; 
    
    inv.generateInvoice(101);
    inv.generateInvoice(102, 3);
    inv.generateInvoice(103 ,5 , 10.5);
}





#include <iostream>
using namespace std; 


class Distance{
    public: 
        int meters;

        Distance(int m=0)
        {
            meters=m;
        }

        
        Distance operator+(const Distance &d)
        {
            return Distance(meters + d.meters);
        }

        void display(){
            cout << "Distance: " << meters << " meters" << endl;
        }

};

int main(){
    Distance d1(25) , d2(25);
    Distance d3 = d1 + d2; // calls opertors
    d3.display(); // it gives output given by the operators and its display it..

    return 0;
    
}