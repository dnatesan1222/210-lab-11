// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;


const int SIZE = 100;


struct Order{ //bakery's database of orders
    
    string name; //customer name
    double money; //double for the receipt total
    int count; //represents number of items purchased in the order - like a costco item count
    string *items; //dynamic array of an itemized list of an order

}

Order createOrder(){
    Order temp;
    
    cout << "Customer name: ";
    getline(cin, temp.name);

    cout << "Order total: $";
    getline(cin, temp.money);

    cout << "Item count: ";
    cin >> temp.count;

    temp.*items = new string[temp.count];
    for (int i = 0; i < temp.count; i++){
        temp.*(items+i) = 

    }

    // returns: a Restaurant struct based upon the user's input
    return temp;

}

int main(){

    Customer *arr = nullptr;
    *arr //make the size variable (maybe edit the orders array to have a variable size too)
    


}


