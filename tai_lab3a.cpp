// COMSC 210 | Andrew Tai | Sep 2 2025
// IDE: Visual Studio Code

#include <iostream>
#include <vector>

using namespace std;

// Structure for restaurant info
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
    /*
    Ask user to input restaurant details until quits
    Prints details
    */

    // Get restaurant info
    vector<Restaurant> restaurants;
    Restaurant this_rest;
    int cont = 1;

    while (cont == 1)
    {
        this_rest = getRestaurantData();
        restaurants.push_back(this_rest);

        cout << "Do you want to enter another? (1:Yes, 0:No)";
        cin >> cont;
        cin.ignore();
    }

    // Display restaurants
    for (const Restaurant &rest : restaurants)
    {
        displayRestaurant(rest);
    }

    return 0;
}

//----------
// Programmer functions
//----------

Restaurant getRestaurantData()
{
    /*
    Get restaurant data from user input
    args: none
    returns: Restaurant struct
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
    args: pointer to Restaurant struct
    returns: none
    */

    cout << "---------------------" << endl;
    cout << "Restaurant: " << rest.name << endl;
    cout << "City: " << rest.city << endl;
    cout << "Seating Capacity: " << rest.seating << endl;
    cout << "Cuisine Type: " << rest.cuisine << endl;
    cout << "Rating: " << rest.rating << endl;
}