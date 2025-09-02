// COMSC 210 | Lab 3a | Andrew Tai | Sep 2 2025
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
        cout << endl;
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
    string temp;

    cout << "Enter restaurant name: ";
    getline(cin, rest.name);

    cout << "Enter city: ";
    getline(cin, rest.city);

    cout << "Enter seating capacity: ";
    cin >> temp;
    cin.ignore();
    try {
        rest.seating = stoi(temp);
    }
    catch (...) {
        cerr << "Invalid input. Seating capacity must be an integer. 0 stored." << endl;
        rest.seating = 0; // Default value
    }

    cout << "Enter cuisine type: ";
    getline(cin, rest.cuisine);

    cout << "Enter rating: ";
    cin >> temp;
    cin.ignore();
    try {
        rest.rating = stof(temp);
    }
    catch (...) {
        cerr << "Invalid input. Rating must be a number. 0.0 stored." << endl;
        rest.rating = 0.0; // Default value
    }

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