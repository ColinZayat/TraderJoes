#include <iostream>
#include <sstream>
using namespace std;

string Hello()
{
    string hello;
    cout << "Whats your name?" << endl;
    getline(cin, hello);
    return hello;
}
string Address()
{
    string address;
    cout << "What is your address?" << endl;
    getline(cin, address);
    return address;
}
string ZipCode()
{
    string zipcode;
    cout << "Whats you zip code?" << endl;
    getline(cin, zipcode);
    return zipcode;
}
string city()
{
    string city;
    cout << "Whats you city?" << endl;
    getline(cin, city);
    return city;
}
string YouWon()
{
    string youWon;
    cout << "Thank you, for filling it out also Trader joes is giving you 250$!" << endl;
    getline(cin, youWon);
    return youWon;
}

int main()
{
    bool keep = true;
    Hello();
    Address();
    ZipCode();
    city();
    YouWon();

    while (keep == true)
    {
        cout << "Trader joes is giving out 250$ !";
    }
}


