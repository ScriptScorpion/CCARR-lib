/*
        READ BEFORE EXPERIMENTING:
        size of array needed to be bigger by the amount of character you need to input,
*/
#include "ccarr.hpp"
int main() {
    const int size = 20;
    char arr[size] = {'a', 'b', 'c', 'd'};
    push_front(arr, std::string("w")); // passed checks!
    std::cout << arr << std::endl; // passed checks!
    push_back(arr, std::string("w")); // passed checks!
    std::cout << arr << std::endl; // passed checks!
    push_front(arr, 'w'); // passed checks!
    std::cout << arr << std::endl; // passed checks!
    push_back(arr, 'w');  // passed checks!
    std::cout << arr << std::endl; // passed checks!
}
