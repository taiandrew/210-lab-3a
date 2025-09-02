// COMSC 210 | Andrew Tai | Sep 2 2025
// IDE: Visual Studio Code

#include <iostream>
#include <vector>

using namespace std;

// Structure for Restaurant
struct Restaurant
{
    string name;
    string city;
    int seating;
    string cuisine;
    float rating;
};

// Function prototypes
Restaurant getRestaurantData();
void displayRestaurant(const Restaurant &r);

//----------
// Main
//----------
int main() 
{

    return 0;
}

//----------
// Programmer functions
//----------

Restaurant getRestaurantData()
{
    /*
    Get restaurant data from user input
    Inputs: none
    Returns: Restaurant struct
    */

    Restaurant rest;

    cout << "Enter restaurant name: ";
    getline(cin, rest.name);
    cout << "Enter city: ";
    getline(cin, rest.city);
    cout << "Enter seating capacity: ";
    cin >> rest.seating;
    cin.ignore(); 
    cout << "Enter cuisine type: ";
    getline(cin, rest.cuisine);
    cout << "Enter rating: ";
    cin >> rest.rating;
    cin.ignore();
 
    return rest;
}

void displayRestaurant(const Restaurant &rest)
{
    /*
    Display restaurant details
    Inputs: pointer to Restaurant struct
    Returns: none
    */

    cout << "---------------------" << endl;
    cout << "Restaurant Details:" << endl;
    cout << "Name: " << rest.name << endl;
    cout << "City: " << rest.city << endl;
    cout << "Seating Capacity: " << rest.seating << endl;
    cout << "Cuisine Type: " << rest.cuisine << endl;
    cout << "Rating: " << rest.rating << endl;
}