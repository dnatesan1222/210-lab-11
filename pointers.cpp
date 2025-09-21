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
        
};

Order createOrder(){
	Order temp;
        temp.items = nullptr;

	cout << "Customer name: ";
	getline(cin, temp.name);

	cout << "Order total: $";
	cin >> temp.money;

	cout << "Item count: ";
	cin >> temp.count;
        cin.ignore();        

	temp.items = new string[temp.count];
	for (int i = 0; i < temp.count; i++){
		cout << "Item " << (i+1) << ": ";
		getline(cin, temp.items[i]);

	}


	// returns: a Order struct based upon the user's input
	return temp;

}


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

int main(){

	/*
	   Customer *arr = nullptr;
	 *arr //make the size variable (maybe edit the orders array to have a variable size too)
	 */

	Order test = createOrder();
	displayOrder(test);


}


