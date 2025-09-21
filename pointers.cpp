// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;


const int SIZE = 100;


struct Order{ //bakery's database of orders
    
    string name; //customer name
    double money; //double for the receipt total 
    string *items; /*= nullptr; //dynamic array of a customer's order history
    orders = new string[SIZE]; //cap the size at 100 orders */

}

Customer createCustomer(){
    Customer temp;
    
    cout << "Customer name: ";
    getline(cin, temp.name);

    temp.cuisine = 0;
    temp.stars = 0;
    

    cout << "Owner's name: ";
    getline(cin, temp.owner);

    cout << "Max customer occupancy: ";
    cin >> temp.maxTotal;

    cout << "Restaurant rating (1.0-5.0 star scale): ";
    cin >> temp.rating;
    cout << endl;

    // returns: a Restaurant struct based upon the user's input
    return temp;

}

int main(){

    Customer *arr = nullptr;
    *arr //make the size variable (maybe edit the orders array to have a variable size too)
    


}


