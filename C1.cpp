#include <iostream>

using namespace std;

/*
 * Create a function called absolute_value that returns the absolute value of
 * its single argument. The absolute value of an integer x is the following: x (itself)
 * if x is greater than or equal to 0; otherwise, it is x times −1
 */
int absolute_value(int x) {
    return x < 0 ? (x) * (-1) : x;
}

/*
 * Write another function called sum that takes two int arguments and returns
 * their sum. How can you modify the template in Listing 1-9 to test your new
 * function?
 */
int sum(int x, int y){
    return x + y;
}

int main() {
    printf("Hello, world! from printF\n");
    cout << "Hello, World from cout with std" << endl;
    std::cout << "Hello, World! from std::cout" << std::endl;
    int my_num = -3567;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
    int first_add = 5;
    int second_add = 6;
    printf("The sum of %d and %d is equal to %d", first_add, second_add, sum(first_add, second_add));
}