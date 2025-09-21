// COMSC-210 | Lab 12 | Justin Beiber (your name)
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
using namespace std;



struct Customer{ //bakery's database of customer rewards/info
    
    string name; //customer name
    double money; //double for total money spent at the bakery
    int stars; //rewards accumulated
    string *orders = nullptr; //dynamic array of a customer's order history
    

}


