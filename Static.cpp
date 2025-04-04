/*Write a program to create a class with name CountUser,
create a function with name count(), this function will display total 
number of users for this class.  */

#include <iostream>
using namespace std;

class CountUser {
public:
    // Static variable to keep track of the number of users
    static int user_count;

    // Constructor to increment the user_count whenever a new object is created
    CountUser() {
        user_count++;
    }

    // Static function to display the total number of users
    static void count() {
        cout << "Total number of users: " << user_count << endl;
    }
};

// Initialize the static variable
int CountUser::user_count = 0;

int main() {
    // Creating instances of CountUser
    CountUser user1;
    CountUser user2;
    CountUser user3;

    // Display the total number of users
    CountUser::count();

    return 0;
}
