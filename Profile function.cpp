#include <iostream>
using namespace std;

int main() {
    // A function that gets all details and makes a profile for you
    // Name, Age, Location, Job title

    string name, age, loc, job;

    // A function that gets your name
    cout << "Hello dear, We need some information to complete your profile." << endl;
    cout << "First, What's your name? ";
    getline(cin, name);

    // A function that gets your age
    cout << "Hello, " << name << ". How old are you? ";
    cin >> age;

    // A function that gets your location
    cout << "Great, Where do you live? ";
    cin >> loc;

    // A function that gets your job
    cout << "Lastly, What do you work? ";
    cin >> job;

    // Your profile
    cout << "Great! we completed your profile." << endl;
    cout << "You're " << name << ", " << age << " Years old, you live in " << loc << " And you work as a " << job;
}