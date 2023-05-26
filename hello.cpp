// C++ program to implement the program
// that illustrates Online shopping
#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
 
char c1, confirm_quantity;
float quantity;
int selectedNum;
double total_amount = 0;
int flag = 0;
 
// Stores items with their corresponding price

map<string, double> items = {
    { "One-Plus", 100000 },
    { "Redmi", 12000 },
    { "Micromax", 10000 },
    { "Asus", 55000 },
    { "Dell", 45000 },
    { "HP", 35000 },
    { "Pant", 1000 },
    { "Shirt", 800 },
    { "T-shirt", 400 }
};
 
// Stores the selected items with
// their quantity
map<string, int> selected_items;
 
// Function to print the bill after shopping
// is completed prints the items, quantity,
// their cost along with total amount
void printBill(map<string, double> items,
               map<string, int> selected_items,
               float total_amount)
{
    cout << "Item      "
         << "Quantity      "
         << "Cost\n";
 
    for (auto j = selected_items.begin();
         j != selected_items.end(); j++) {
        cout << j->first << "        ";
        cout << j->second << "          ";
        cout << (selected_items[j->first])
                    * (items[j->first])
             << endl;
    }
 
    cout << "-----------------------"
         << "-------------\n";
    cout << "Total amount:             "
         << total_amount << endl;
    cout << "-----------------------"
         << "-------------\n";
    cout << "*****THANK YOU && HAPPY"
         << " ONLINE SHOPPING*****";
}
 
// Function to ask the basic details of
// any customer
void customerDetails()
{
 
    cout << "Enter your name: ";
    string customer_name;
    getline(cin, customer_name);
 
    cout << "WELCOME ";
    for (int i = 0;
         i < customer_name.length();
         i++) {
        cout << char(toupper(
            customer_name[i]));
    }
    cout << "\n";
}
 
// showMenu() is to print the
// menu to the user
void showMenu()
{
    cout << "Menu\n";
    cout << "=  =  =  =  =  =  =  = "
         << " =  =  =  =  = \n";
    cout << "1.Mobile\n2.laptop\n3"
         << ".Clothes\n";
    cout << "=  =  =  =  =  =  =  = "
         << " =  =  =  =  = \n";
}
 
// Function to display the mobile products
void showMobileMenu()
{
    cout << "- - - - - - - - - - -"
         << " - -\nItem       Cost\n";
    cout << "1.One-Plus  Rs.1,00000/-\n";
    cout << "2.Redmi    Rs.12, 000/-\n";
    cout << "3.Micromax    Rs.10, 000/-\n";
    cout << "- - - - - - - - - - - - -\n";
}
 
// Function to display Laptop products
void showLaptopMenu()
{
    cout << "- - - - - - - - - - -"
         << " - -\nItem       Cost\n";
    cout << "1.Asus  Rs.55,000/-\n";
    cout << "2.Dell       Rs.45, 000/-\n";
    cout << "3.HP   Rs.35, 000/-\n";
    cout << "- - - - - - - - - - - - -\n";
}
 
// if the user selects Clothes,
// then Clothes list will be display
void showClothesMenu()
{
    cout << "- - - - - - - - - - "
         << " - -\nItem       Cost\n";
    cout << "1.Pant        Rs.1,000/-\n";
    cout << "2.Shirt      Rs.800/-\n";
    cout << "3.T-Shirt     Rs.400/-\n";
    cout << "- - - - - - - - - - - - -\n";
}
 
// Function to display the mobile category
void selectedMobile()
{
    cout << "Do you wish to conti"
         << "nue?(for yes press (Y/y ), "
         << " if no press other letter ): ";
    cin >> c1;
 
    if (c1 == 'Y' || c1 == 'y') {
        cout << "Enter respective number: ";
        cin >> selectedNum;
 
        if (selectedNum == 1
            || selectedNum == 2
            || selectedNum == 3) {
 
            // Selected One-Plus
            if (selectedNum == 1) {
 
                cout << "selected One-Plus\n";
                do {
                    cout << "Quantity: ";
 
                    cin >> quantity;
 
                    cout << "You have selected One-Plus - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << " if no press other letter): ";
 
                    cin >> confirm_quantity;
 
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity) != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["One-Plus"];
                    selected_items["One-Plus"] = quantity;
                    cout << "amount  =  "
                         << total_amount << endl;
                }
            }
 
            // Selected Redmi
            if (selectedNum == 2) {
 
                cout << "selected Redmi\n";
 
                do {
                    cout << "Quantity: ";
                    cin >> quantity;
                    cout << "You have selec"
                         << "ted Redmi - "
                         << quantity << endl;
                    cout << "Are you sure?(f"
                         << "or yes press (Y/y ), "
                         << " if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
 
                    total_amount += quantity
                                    * items["Redmi"];
                    selected_items["Redmi"] = quantity;
                    cout << "amount  =  "
                         << total_amount << endl;
                }
            }
 
            // Selected Micromax
            if (selectedNum == 3) {
 
                cout << "You have selected Micromax\n";
 
                do {
                    cout << "Quantity: ";
                    cin >> quantity;
                    cout << "You have selected"
                         << " Micromax- "
                         << quantity
                         << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y )"
                         << ", if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["Micromax"];
                    selected_items["Micromax"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}
 
// If Laptop category is selected
void selectedLaptop()
{
    cout << "Do you wish to continue?"
         << "(for yes press (Y/y ), "
         << "if no press other letter): ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
 
        cout << "Enter respective number: ";
        cin >> selectedNum;
 
        if (selectedNum == 1
            || selectedNum == 2
            || selectedNum == 3) {
 
            // selected Asus
            if (selectedNum == 1) {
                cout << "selected Asus\n";
                do {
 
                    cout << "Quantity: ";
                    cin >> quantity;
 
                    cout << "You have selected"
                         << " Asus - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << " if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["Asus"];
                    selected_items["Asus"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
 
            // selected Dell
            if (selectedNum == 2) {
                cout << "selected Dell\n";
                do {
                    cout << "Quantity: ";
                    cin >> quantity;
                    cout << "You have selected"
                         << " Dell - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << " if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity
                              != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["Dell"];
                    selected_items["Dell"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
 
            // selected HP
            if (selectedNum == 3) {
                cout << "selected HP\n";
                do {
 
                    cout << "Quantity: ";
                    cin >> quantity;
 
                    cout << "You have selected"
                            " HP - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << "if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["HP"];
                    selected_items["HP"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}
 
//If Clothes category is selected
void selectedClothes()
{
    cout << "Do you wish to continue?"
         << "(for yes press (Y/y ), "
         << "if no press other letter): ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
 
        cout << "Enter respective number: ";
        cin >> selectedNum;
 
        if (selectedNum == 1
            || selectedNum == 2
            || selectedNum == 3) {
 
            // selected Pant
            if (selectedNum == 1) {
                cout << "selected Pant\n";
                do {
 
                    cout << "Quantity: ";
                    cin >> quantity;
 
                    cout << "You have selected"
                         << " Pant- "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << " if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["Pant"];
                    selected_items["Pant"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
 
            // selected Shirt
            if (selectedNum == 2) {
                cout << "selected Shirt\n";
                do {
                    cout << "Quantity: ";
                    cin >> quantity;
                    cout << "You have selected"
                         << " Shirt - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << " if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity
                              != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["Shirt"];
                    selected_items["Shirt"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }
            }
 
            // selected T-Shirt
            if (selectedNum == 3) {
                cout << "selected T-Shirt\n";
                do {
 
                    cout << "Quantity: ";
                    cin >> quantity;
 
                    cout << "You have selected"
                            " T-Shirt - "
                         << quantity << endl;
                    cout << "Are you sure?"
                         << "(for yes press (Y/y ), "
                         << "if no press other letter ): ";
                    cin >> confirm_quantity;
                } while ((confirm_quantity != 'y'
                          && confirm_quantity != 'Y')
                         || (quantity < 0)
                         || (ceil(quantity)
                             != floor(quantity)));
 
                if (confirm_quantity == 'y'
                    || confirm_quantity == 'Y') {
                    total_amount += quantity
                                    * items["T-Shirt"];
                    selected_items["T-Shirt"] = quantity;
                    cout << "amount  =  "
                         << total_amount
                         << endl;
                }    
            
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}
 
 
// Driver code
int main()
{
    // function call
    customerDetails();
 
    do {
        showMenu();
        cout << "Do you wish to continue?"
             << "(for yes press (Y/y ), "
             << " if no press other letter ): ";
        char c;
        cin >> c;
        if (c == 'Y' || c == 'y') {
            cout << "Enter respective number: ";
            int num;
            cin >> num;
            if (num == 1 || num == 2
                || num == 3) {
                switch (num) {
                case 1:
 
                    // For Mobile
                    showMobileMenu();
                    selectedMobile();
                    break;
 
                case 2:
 
                    // For Laptop
                    showLaptopMenu();
                    selectedLaptop();
                    break;
 
                case 3:
 
                    // For Clothes
                    showClothesMenu();
                    selectedClothes();
                    break;
                }
            }
            else {
                flag = 1;
            }
        }
        else {
            flag = 1;
        }
 
    } while (flag == 0);
 
    // print bill
    printBill(items, selected_items,
              total_amount);
}