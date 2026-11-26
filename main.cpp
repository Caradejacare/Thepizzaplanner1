#include <iostream>
#include <cmath> // round(), floor(), ceil()

using namespace std;
const double GST = 0.05;
const double SLICES_PER_PIZZA = 8.0;


int main() {
    string partyName;
    int numGuests;
    double pricePerPizza;
    int slicesPerGuest;

    cout << "Enter the Party Name: ";
    getline(cin, partyName);


    cout << "Enter numer of guests: ";
    cin >> numGuests;

    cout << "Enter the number of slices for each guest: ";
    cin >> slicesPerGuest;

    pricePerPizza = 18.50;




 /*   Party name: Maya's Birthday
Number of guests: 10
Slices per guest: 3
Price per pizza: $18.50
============================
PIZZA PARTY PLANNER
============================
Party: Maya&#39;s Birthday
Guests: 10
Slices needed: 30
Pizzas to order: 4
----------------------------
Subtotal: $74.00
GST (5%): $3.70
Total: $77.70
Per guest: $7.77
============================*/

//-------Receipt-------
cout << "Party name: " << partyName << endl;
cout << "Number of guests: " << numGuests << endl;
cout << "Slices per guest: " << slicesPerGuest << endl;
cout << "Price per pizza: " << pricePerPizza ;
/*cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<
cout <<*/



    return 0;
}

/*1. Asks for the party name (it can contain spaces), the number of guests, the number of slices each guest will eat,
and the price of one pizza.
2. Works out the total slices needed.
3. Works out how many whole pizzas to order. A pizza has 8 slices and you cannot order part of one, so round UP.
4. Works out the subtotal (pizzas × price), the GST (5%), the total, and each guest’s share of the total.
5. Prints a receipt like the sample below.
Everything goes in main(). There are no functions yet. Use named constants for the slices per pizza and the GST rate,
and choose the right data type for every value.*/
