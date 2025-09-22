// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;

const int NR_ORDERS = 3;

struct Order{ //bakery's database of orders

    string name; //customer name
    double money; //double for the receipt total
    int count; //represents number of items purchased in the order - like a costco item count
    string *items; //dynamic array of an itemized list of an order

    ~Order() {
        if(items)
            delete [] items;
        items = nullptr;
    }        
};


//createOrder() takes user input to create an Order object
//arguments: none
//returns: an Order struct based upon the user's input
void createOrder(Order *ptr){

    static int nrOrd = 1;    //confused by the use of this
    cout << "Customer name: ";
    getline(cin, ptr->name);

    cout << "Order total: $";
    cin >> ptr->money;

    cout << "Item count: ";
    cin >> ptr->count;
    cin.ignore();        

    ptr -> items = new string[ptr->count];
    for (int i = 0; i < ptr->count; i++){
        cout << "Item " << (i+1) << ": ";
        getline(cin, ptr->items[i]);
    }

    cout << '\n' << endl;
    nrOrd++;

}

// displayOrder() outputs an Order object's data
// arguments: takes in an order object to use to output its information
// returns: nothing
void displayOrder(Order *ptr){

    cout << "Customer name: " << ptr->name;
    cout << "\nOrder total: $" << ptr->money;
    cout << "\nItems: ";
    for (int i = 0; i < ptr->count; i++){
	if (i == 0)
	    cout << ptr->items[i];
	else
            cout << ", " << ptr->items[i];
    } 
    cout << '\n' << endl;
}

void displayArray(Order *arr){
    

}

int main(){ 

    Order *history = new Order[NR_ORDERS];

    for (int i = 0; i < NR_ORDERS; i++)
        createOrder(&history[i]);
    for (int i = 0; i < NR_ORDERS; i++)
        displayOrder(&history[i]);

    return 0;
}


