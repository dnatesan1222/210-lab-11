// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;


const int SIZE = 100;

struct Customer{ //bakery's database of customer rewards/info
    
    string name; //customer name
    double money; //double for total money spent at the bakery
    int stars; //rewards accumulated
    string *orders = nullptr; //dynamic array of a customer's order history
    orders = new string[SIZE]; //cap the size at 100 orders

}

int main(){

    Customer *arr = nullptr;
    *arr //make the size variable (maybe edit the orders array to have a variable size too


}


