// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;




struct Order{ //bakery's database of orders

    string name; //customer name
    double money; //double for the receipt total
    int count; //represents number of items purchased in the order - like a costco item count
    string *items; //dynamic array of an itemized list of an order
        
};


//createOrder() takes user input to create an Order object
//arguments: none
//returns: an Order struct based upon the user's input
void createOrder(Order *ptr){
    
    cout << "Customer name: ";
    getline(cin, ptr->name);

    cout << "Order total: $";
    cin >> ptr->money;

    cout << "Item count: ";
    cin >> ptr->count;
    cin.ignore();        

    ptr -> items = new string[ptr->count];
    for (int i = 0; i < temp.count; i++){
        cout << "Item " << (i+1) << ": ";
        getline(cin, temp->items[i]);
    }
    cin.ignore();


    cout << endl;
    

}

// displayOrder() outputs an Order object's data
// arguments: takes in an order object to use to output its information
// returns: nothing
void displayOrder(Order o){

    cout << "\nCustomer name: " << o.name;
    cout << "\nOrder total: $" << o.money;
    cout << "\nItems: ";
    for (int i = 0; i < o.count; i++){
	if (i == 0)
	cout << o.items[i];
	else
        cout << ", " << o.items[i];
    } 
    cout<< '\n' << endl;
}

void displayArray(Order *arr){
    

}

int main(){

	
    Customer *arr = nullptr;
    *arr //make the size variable (maybe edit the orders array to have a variable size too)
	 

    Order test = createOrder();
    displayOrder(test);

    delete [] arr;

}


